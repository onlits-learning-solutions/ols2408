<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>New Teacher</title>
</head>
<body>
        <header>
        <h1>Class Routine</h1>
        <nav>
            <a href="index.php">Home</a>
            <a href="teacher.php">Teacher</a>
        </nav>
    </header>
    <main>
        <h3>New Teacher</h3>
        <form action="add-teacher.php">
            <label for="name">Name</label>
            <input type="text" name="name" id="name" required>
            <label for="fathers_name">Father's Name</label>
            <input type="text" name="fathers_name" id="fathers_name" required>
            <button>Submit</button>
        </form>
    </main>
    <footer>

    </footer>
</body>
</html>