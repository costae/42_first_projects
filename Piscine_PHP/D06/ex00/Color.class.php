<?php
	class Color
	{
		public $red = 0;
		public $green = 0;
		public $blue = 0;
		public static $verbose = false;

		function __construct($ar)
		{
			if (isset($ar['rgb']))
			{
				$this->red = $ar['rgb'] / 65281 % 256;
				$this->green = $ar['rgb'] / 256 % 256;
				$this->blue = $ar['rgb'] % 256;
			}
			else
			{
				$this->red = $ar['red'];
				$this->green = $ar['green'];
				$this->blue = $ar['blue'];
			}
			if (self::$verbose)
			{
				echo vsprintf("Color( red: %3d, green: %3d, blue: %3d ) constructed.\n", array($this->red, $this->green, $this->blue));
			}
		}
		function __destruct()
		{
			if (self::$verbose)
			{
				echo vsprintf("Color( red: %3d, green: %3d, blue: %3d ) destructed.\n", array($this->red, $this->green, $this->blue));
			}
		}
		function __toString()
		{
			return vsprintf("Color( red: %3d, green: %3d, blue: %3d )\n", array($this->red, $this->green, $this->blue));
		}
			function add($b)
		{
			return new Color( array( 'red' => $this->red+$b->red, 'green' => $this->green+$b->green   , 'blue' => $this->blue+$b->blue));
		}
		function sub($b)
		{
			return new Color( array( 'red' => $this->red-$b->red, 'green' => $this->green-$b->green   , 'blue' => $this->blue-$b->blue));
		}
		function mult($b)
		{
			return new Color( array( 'red' => $this->red*$b, 'green' => $this->green*$b , 'blue' => $this->blue*$b));
		}
		static function doc()
	    {

	    	return file_get_contents("Color.doc.txt");
	    }
	}
?>