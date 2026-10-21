from flask import Flask, request, jsonify
from flask_cors import CORS
import subprocess

app = Flask(__name__)
CORS(app) # Allows the HTML file to talk to this server

@app.route('/calculate', methods=['GET'])
def calculate():
    gate = request.args.get('gate', 'AND')
    a = request.args.get('a', '0')
    b = request.args.get('b', '0')

    # Run the C executable
    # Note: On Windows, it's 'logic.exe'. On Mac/Linux, it's './logic'
    result = subprocess.run(['logic.exe', gate, a, b], capture_output=True, text=True)
    
    return jsonify({"result": result.stdout})

if __name__ == '__main__':
    app.run(port=5000)