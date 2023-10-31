
        <?php
        if(isset($_POST["submit"]))
        {
            $con=mysql_connect("localhost","root","");
            $user=$_POST["user_code"];
            $name=$_POST["name1"];
            $pass=$_POST["password"];
            $typ=$_POST["types"];
            $sta=$_POST["status"];
            $cont=$_POST["contact"];
            $email=$_POST["email_id"];
            $hin=$_POST["hint"];
            print_r($_POST[submit]);
            if($con==NULL)
            {
                echo "server not found";
                exit();
            }
            mysql_select_db(test,$con) or die ("Database not found");
            $cmd="INSERT INTO user(`user_code`, `name1`, `password`, `types`, `status`, `contact`, `email_id`, `hint`) VALUES ('$user','$name','$pass','$typ','$sta','$cont','$email','$hin')";
               echo $cmd;
            mysql_query($cmd,$con);
            $s=  mysql_affected_rows($con);
         
            if(s>0)
            {
                echo "Data insert successfully";
            }
            else
            {
                echo "Data not insert";
            }
        }
        ?>
    