<?php $color=$_POST['fav']; ?>
<table border="10" bordercolor="<?php echo $color; ?>">
    <?php
        $col=$_POST['col'];
        $row=$_POST['row'];
        for ($X=1; $X<= $col*$row; $X++) {
          if ($X % 5 ==1) {
            echo "<tr>";
            echo "<td \"align=\"center\" width=\"20\" vertical-align: middle;>";
            echo "$X";
            echo "</td>";
          }elseif ($X % 5 ==0) {
            echo "<td  align=\"center\" width=\"20\">";
            echo "$X";
            echo "</td>";
            echo "</tr>";
          }else {
            echo "<td  align=\"center\" width=\"20\">";
            echo "$X";
            echo "</td>";
          }
        }
    ?>
      </table>
