# command-line-crypt
Command line crypt

When updating an old Mysql database server used for hosting email accessed by courier-authlib, I found that the previous methodology of updating the crypt password field by using the built in function encrypt() in MySQL no longer was available, resulting in the error 'FUNCTION database_name.encrypt does not exist'

Since authlib expects to use the linux system crypt() call, a quick an easy fix was this command line application to take a string and execute crypt() against it.

I used https://stackoverflow.com/questions/19231612/how-to-write-a-argv-and-argc as the starting point for this code.

Example Use in PHP:
<code>
<?php
$crypt_password = exec("/usr/bin/crypt $password");
?>
</code>

