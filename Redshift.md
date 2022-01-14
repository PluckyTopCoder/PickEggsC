# Redshift Cluster for Analyzing Music Streaming

## Overview

A startup called Sparkify wants to analyze the data they've been collecting on songs and user activity on their new music streaming app. The analytics team is particularly interested in understanding what songs users are listening to. This project creates a Redshift Cluster with tables designed to optimize queries on song play analysis.

## Files in the Repository

### create_tables.py
drops and creates your tables. You run this file to reset your tables before each time you run your ETL scripts.


### etl.py
copies and processes files from AWS S3 bucket and loads them into your tables.


### sql_queries.py
contains all your sql queries, and is imported into the two files above.


## How to Run the Scripts
In Jupyter Lab, start a new command line interface by clicking "File" -> "New" -> "Terminal".<br>
1. Run command `python create_tables.py`.
2. Run command `python etl.py`.<br>

Remember to rerun `create_tables.py` to reset your tables before each time you run `etl.py`.


## Database Design
The database tables employ a Star Schema with the purpose to optimize queries on song play analysis.

### Fact Table
1. songplays - records in log data associated with song plays.


### Dimension Tables
1. users - users in the app.
2. songs - songs in music database.
3. artists - artists in music database.
4. time - timestamps of records in songplays broken down into specific units.
