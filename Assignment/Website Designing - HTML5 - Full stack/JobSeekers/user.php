<!DOCTYPE html>
<!--
All Content Copy Right By Quick Job Seekers
-->
<html>
    <head>
        <meta charset="UTF-8">
        <title></title>
        <style>
                 .form{
                  width: 400px;height: auto;font-family: verdana;font-size: 12pt;background-color: #ffffff;
                 }
                 .labelcss{
                 text-align: right; margin-right: 10px;    
                 }    
                 .tbcss{
                   margin: 6px 0px 6px 15px;
                   width: 220px; height: 27px;
                   border:#333 1px ridge;
                    
                 }
                 .table{
                  width: 100%;height: 160px;background-color: #ffffff;margin: -7px auto;   
                 }
        </style>
    </head>
    <body>
        <div> 
        <form action="Use.php" method="Post">
          
                
              <table class="form">
           
            <tr>
                <td class="labelcss"><label>User Code</label></td>    
            <td><input type="text" name="user_code" class="tbcss"/></td>
            </tr>
            <tr>
                <td class="labelcss"><label>Name</label></td>    
            <td><input type="text" name="name1" class="tbcss"/></td>
            </tr>
            <tr>
                <td class="labelcss"><label>Password</label></td>    
            <td><input type="password" name="password" class="tbcss"/></td>
            </tr>
            <tr>
                <td class="labelcss"><label>Types</label></td>
                <td><input type="text" name="types" class="tbcss"/></td> 
            </tr>
            <tr>
                <td class="labelcss"><label>Status</label></td>
                <td><input type="text" name="status" class="tbcss"/></td>
            </tr>
            <tr>
                <td class="labelcss"><label>Contact</label></td>
                <td><input type="text" name="contact" class="tbcss"/></td>
            </tr>
            <tr>
                <td class="labelcss"><label>Email id</label></td>
                <td><input type="email" name="email_id" class="tbcss"/></td>
            </tr>
            <tr>
                <td class="labelcss"><label>Hint</label></td>
                <td><input type="text" name="hint" class="tbcss"/></td>
            </tr>
            <tr>
                <td><input type="submit" name="submit" value="submit"></td>
            </tr>
            
        </table>
         </form>
        </div>
    </body>
</html>
