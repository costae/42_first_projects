<?php
class Vertex {
	
	public static $verbose = False;
	private $_x;
	private $_y;
	private $_z;
	private $_w = 1.0;
	private $_color;
	public static function doc() {
		return file_get_contents("Vertex.doc.txt");
	}
	function __construct($ar)
	{
		$this->_color = new Color( array('red'=> 255, 'green'=> 255, 'blue'=> 255));
		if (isset($ar['x'])) $this->_x = $ar['x'];
		if (isset($ar['y'])) $this->_y = $ar['y'];
		if (isset($ar['z'])) $this->_z = $ar['z'];
		if (isset($ar['w'])) $this->_w = $ar['w'];
		if (isset($ar['color'])) $this->_color = $ar['color'];
		if (self::$verbose)
			echo vsprintf("Vertex( x: %0.2f, y: %0.2f, z:%0.2f, w:%0.2f, Color( red: %3d, green: %3d, blue: %3d ) ) constructed\n", array($this->_x, $this->_y, $this->_z, $this->_w, $this->_color->red, $this->_color->green, $this->_color->blue));
	}
	function __destruct()
	{
		if (self::$verbose)
		{
			echo vsprintf("Vertex( x: %0.2f, y: %0.2f, z:%0.2f, w:%0.2f, Color( red: %3d, green: %3d, blue: %3d ) ) destructed\n", array($this->_x, $this->_y, $this->_z, $this->_w, $this->_color->red, $this->_color->green, $this->_color->blue));
		}
	}
	function __toString()
	{
		if (self::$verbose)
			return vsprintf("Vertex( x: %0.2f, y: %0.2f, z:%0.2f, w:%0.2f, Color( red: %3d, green: %3d, blue: %3d ) )", array($this->_x, $this->_y, $this->_z, $this->_w, $this->_color->red, $this->_color->green, $this->_color->blue));
		else
			return vsprintf("Vertex( x: %0.2f, y: %0.2f, z:%0.2f, w:%0.2f )", array($this->_x, $this->_y, $this->_z, $this->_w));
	}
	function setX($b)
	{
		$this->_x = $b;
	}
	function setY($b)
	{
		$this->_y = $b;
	}
	function setZ($b)
	{
		$this->_z = $b;
	}
	function setW($b)
	{
		$this->_w = $b;
	}
	function setColor($b)
	{
		$this->_color = $b;
	}
	function getX()
	{
		return $this->_x;
	}
	function getY()
	{
		return $this->_y;
	}
	function getZ()
	{
		return $this->_z;
	}
	function getW()
	{
		return $this->_w;
	}
	function getColor()
	{
		return $this->_color;
	}
}

?>