# Silicon Gate Simulator

A full-stack hardware simulation web app. The frontend sends inputs to a Python Flask backend, which executes a custom C logic engine to calculate bitwise gate outputs.

# Tech Stack
- **Frontend:** HTML, CSS, JavaScript (Fetch API)
- **Backend:** Python (Flask)
- **Logic Engine:** C

# How to Run
1. Compile the C engine: `gcc logic.c -o logic`
2. Install Python dependencies: `pip install flask flask-cors`
3. Start the server: `python app.py`
4. Open `index.html` in your browser.