<!DOCTYPE html>
<!--
All Content Copy Right By Quick Job Seekers
-->
<html>
    <head>
        <meta charset="UTF-8">
        <title></title>
    </head>
    <body>
        <?php
        $con=mysql_connect("localhost","root","");
        if($con==NULL)
        {
            echo "Server not found";
            exit();
        }
        mysql_select_db("reg",$con) or die("Database not found");
        $cmd="insert into info(`Name`,`Email`,`Mobile no`,`age`,`address`) VALUES('Gourav','gouravtamboli12@gmail.com','7894563210','24','pratapgarh')";
        mysql_query($cmd,$con);
        $s=  mysql_affected_rows($con);
        if($s>0)
        {
            echo "Data insert successfully";
        }
        else{
            "Data not insert successfully";
        }
        ?>
    </body>
</html>
