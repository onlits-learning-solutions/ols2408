<?php
$connection = mysqli_connect("localhost", "ols2408", "ols2408", "class_routine_2408");
$sql = "SELECT * FROM teacher";
$result = $connection->query($sql);

$teachers = $result->fetch_all(MYSQLI_ASSOC);
?>
<!DOCTYPE html>
<html lang="en">

<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Class Routine - Teachers</title>
</head>

<body>
    <header>
        <h1>Class Routine</h1>
        <nav>
            <a href="index.php">Home</a>
            <a href="">Teacher</a>
        </nav>
    </header>
    <main>
        <h3>Teachers</h3>
        <a href="new-teacher.php">New</a>
        <table>
            <thead>
                <tr>
                    <th>Id</th>
                    <th>Name</th>
                    <th>Father's Name</th>
                </tr>
            </thead>
            <tbody>
                <?php foreach ($teachers as $teacher) { ?>
                    <tr>
                        <td><?= $teacher['id'] ?></td>
                        <td><?= $teacher['name'] ?></td>
                        <td><?= $teacher['fathers_name'] ?></td>
                    </tr>
                <?php } ?>
            </tbody>
        </table>
    </main>
    <footer>

    </footer>
</body>

</html>