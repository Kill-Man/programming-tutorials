<?php
session_start(); // Any document using a session should start with this. . .
// . . . even if the session has already started.
echo 'Your name is ' . $_SESSION['name'] . '.<br>Your age is ' .
     $_SESSION['age'] . '.';
?>
