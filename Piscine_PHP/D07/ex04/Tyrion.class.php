<?php
    class Tyrion
    {
        public function sleepWith($a)
        {
            if ($a instanceof Jaime)
                echo "Not event if I'm drunk !" .PHP_EOL;
            else if ($a instanceof Sansa)
                echo "Let's do this." .PHP_EOL;
            else if ($a instanceof Cersei)
                echo "Not event if I'm drunk !" .PHP_EOL;
        }
    }
?>