# Base image
FROM python:alpine

# Add app code to /code inside container image
#ADD . /code
COPY . /code/app.py

# Set working directory for subsequent commands
WORKDIR /code

# Install dependencies
#RUN pip install -r requirements.txt

# Command to run when container starts
ENTRYPOINT ["python", "app.py"]
#check change outside of code- to be deleted