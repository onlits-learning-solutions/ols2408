<?php
$connection = mysqli_connect("localhost", "ols2408", "ols2408", "class_routine_2408");

$name = $_GET['name'];
$fathers_name = $_GET['fathers_name'];

$sql = "INSERT INTO teacher(name, fathers_name) VALUES('$name', '$fathers_name')";

$connection->query($sql);

$connection->close();

header("location:teacher.php");