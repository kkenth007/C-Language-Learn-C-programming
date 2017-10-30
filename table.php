<center><table bordercolor="green" border="4">
<?php
echo "<body style='background-color:black'>";
for ($X=1; $X <=100 ; $X++) {
  if ($X %10 ==1) {
    echo "<tr>";
    echo "<td bgcolor=\"green\"align=\"center\" width=\"20\" vertical-align: middle;>";
    echo "$X";
    echo "</td>";
  }elseif ($X %10 ==0) {
    echo "<td bgcolor=\"green\" align=\"center\" width=\"20\">";
    echo "$X";
    echo "</td>";
    echo "</tr>";
  }else {
    echo "<td bgcolor=\"green\" align=\"center\" width=\"20\">";
    echo "$X";
    echo "</td>";
  }
}
?>
</table>
