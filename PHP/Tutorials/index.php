<?php
session_start(); // This will store all info in cookies. This information. . .
// . . . will stay as long as the cookies aren't deleted. Cookies are usually
// deleted once the browsing session is over and the web browser is closed.
// You can delete session variables with session_unset() and destroy the session
// with session_destroy().
?>
<!DOCTYPE html> <!-- html that includes php should be *.php -->
<html>
<head>
<title>Web Site :: Apache Server</title>
</head>

<body>
<?php include 'tutorial.php'; ?> <!-- include is like #include in C. -->
<form action="posttest.php" method="POST"> <!-- All info in this form will be
sent to tutorial.php in the $_POST superglobal when the user submits the info.
$_GET is also possible if you use method="GET" and you get the same result, but
$_POST is safer. For info on the php code of this, check posttest.php. -->
  <p>Name: <input type="text" name="name" required /></p>
  <p>Age: <input type="text" name="age" required /></p>
  <input type="submit" name="submit" value="Test POST" />
</form>
<form action="gettest.php" method="GET"> <!-- This is the same as POST, but it
uses GET instead of POST. Check gettest.php for more information. -->
  <p>Name: <input type="text" name="name" required /></p>
  <p>Age: <input type="text" name="age" required /></p>
  <input type="submit" name="submit" value="Test GET" />
</form>

<!--
<?php require 'nonexistant.php'; ?> Commented out so it doesn't cause
an error. Remove comment to test. require makes it to where php throws an error
if the file that is required is nonexistant.
-->
</body>
</html>
