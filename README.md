<h1>To-Do List Application</h1>
        <p>This is a simple To-Do List application written in C++. It allows users to create, manage, and track tasks. Tasks can be added, marked as done, checked for completion, or removed. The application uses a linked list data structure to manage tasks.</p>

<h2>Features</h2>
<ul>
            <li>Add Task: Add a new task to your to-do list.</li>
            <li>Remove Task: Remove an existing task from your list.</li>
            <li>Mark Task as Done: Mark a specific task as completed.</li>
            <li>Check Task Status: Check whether a task is done or not.</li>
            <li>Display To-Do List: Display all tasks with their completion status.</li>
</ul>
<h2>How It Works</h2>
<p>The application maintains a dynamic list of tasks using a linked list (node structure). Each task is represented by a string and has a done status (true/false). The list is managed by the <strong>Todolist</strong> class, which provides several functionalities like adding, removing, and checking tasks.</p>

<h3>Structure</h3>
<ul>
            <li><strong>struct node:</strong> A structure that represents each task.
                <ul>
                    <li>task: The name of the task.</li>
                    <li>done: Boolean status of whether the task is completed.</li>
                    <li>next: Pointer to the next task in the list.</li>
                </ul>
            </li>
            <li><strong>Todolist:</strong> The main class that manages the to-do list and its operations.
                <ul>
                    <li>Addtask: Adds a new task to the list.</li>
                    <li>Removetask: Removes a task from the list by its name.</li>
                    <li>MarkasDone: Marks a specific task as completed.</li>
                    <li>Checktask: Checks whether a task is done or not.</li>
                    <li>Displaylist: Displays the entire to-do list with the status of each task.</li>
                </ul>
            </li>
        </ul>
        <h2>Usage</h2>
        <h3>Running the Program</h3>
        <ul>
            <li>Clone the repository or download the source code.</li>
            <li>Compile the program using a C++ compiler.</li>
            <li>Run the compiled program:</li>
        </ul>
        <h3>Application Menu</h3>
        <p>Once the program is running, you will see the following options:</p>
        <pre>
To Do List is:
1. Addtask
2. Removetask
3. MarkasDone
4. Checktask
5. Displaylist
0. Exit
Enter your choice [0, 1, 2, 3, 4, 5]:
        </pre>
        <h3>Option Descriptions:</h3>
        <ul>
            <li><strong>1. Addtask:</strong> Prompts you to enter a task name. This task will be added to the list.</li>
            <li><strong>2. Removetask:</strong> Prompts you to enter the name of the task you want to remove.</li>
            <li><strong>3. MarkasDone:</strong> Prompts you to enter the name of the task you want to mark as completed.</li>
            <li><strong>4. Checktask:</strong> Prompts you to enter the name of the task to check if it is done.</li>
            <li><strong>5. Displaylist:</strong> Displays all tasks in the list along with their statuses (done or not done).</li>
            <li><strong>0. Exit:</strong> Exits the program.</li>
        </ul>
        <h3>Example Run</h3>
        <pre>
To Do List is:
1. Addtask
2. Removetask
3. MarkasDone
4. Checktask
5. Displaylist
0. Exit
Enter your choice [0, 1, 2, 3, 4, 5]: 1
Enter the task to add: Buy groceries

Enter your choice [0, 1, 2, 3, 4, 5]: 5
To-Do List:
- Buy groceries --> Not Done
        </pre>
        <h2>Requirements</h2>
        <ul>
            <li>A C++ compiler (such as g++ for Linux/macOS or MinGW for Windows).</li>
            <li>Basic knowledge of running programs from the command line.</li>
        </ul>
        <h2>Contributing</h2>
        <p>Feel free to fork this repository, make changes, and submit pull requests. Any improvements or bug fixes are welcome!</p>
        <h2>License</h2>
        <p>This project is open-source and available under the MIT License.</p>
