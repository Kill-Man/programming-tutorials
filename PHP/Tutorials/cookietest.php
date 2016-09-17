<?php
// isset() tests if the element in $_COOKIE was set. It returns 1 if it is.
if (isset($_COOKIE['name']) && isset($_COOKIE['age'])) {
    echo 'Your name is ' . $_COOKIE['name'] . '.<br>Your age is ' .
        $_COOKIE['age'] . '.';
}
?>