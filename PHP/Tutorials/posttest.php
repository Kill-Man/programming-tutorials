<?php # Make sure that setcookie() is used before the <html> tag is used.
setcookie('name', $_POST['name']);
setcookie('age', $_POST['age']);
/*
 * name: Specifies the cookie's name
 * value: Specifies the cookie's value
 * expire: Specifies (in seconds) when the cookie is to expire. The value:
 *     time()+86400*30, will set the cookie to expire in 30 days. If this
 *     parameter is omitted or set to 0, the cookie will expire at the end of
 *     the session (when the browser closes). Default is 0.
 * path: Specifies the server path of the cookie. If set to "/", the cookie will
 *     be available within the entire domain. If set to "/php/", the cookie will
 *     only be available within the php directory and all sub-directories of
 *     php. The default value is the current directory in which the cookie is
 *     being set.
 * domain: Specifies the cookie's domain name. To make the cookie available on
 *     all subdomains of example.com, set the domain to "example.com".
 * secure: Specifies whether or not the cookie should only be transmitted over a
 *     secure, HTTPS connection. TRUE indicates that the cookie will only be set
 *     if a secure connection exists. Default is FALSE.
 * httponly: If set to TRUE, the cookie will be accessible only through the HTTP
 *     protocol (the cookie will not be accessible to scripting languages).
 *     Using httponly helps reduce identity theft using XSS attacks. Default is
 *     FALSE.
 */
?>
<!DOCTYPE html>
<html>
<body>
<?php
session_start(); // Any document using a session should start with this. . .
// . . . even if the session has already started.
echo 'Welcome, ' . $_POST['name'] . '.<br>You are ' . $_POST['age'] .
     ' years old.<br>Saved to session.<br>';
$_SESSION['name'] = $_POST['name'];
$_SESSION['age'] = $_POST['age'];
?>
<a href="sessiontest.php">Test $_SESSION variable.<br></a>
<a href="cookietest.php">Test $_COOKIE variable.</a>
</body>
</html>
