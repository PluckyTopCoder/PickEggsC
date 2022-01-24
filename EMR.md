# AWS EMR Cluster for Analyzing Music Streaming

## Overview

A music streaming startup, Sparkify, has grown their user base and song database even more and want to move their data warehouse to a data lake.
This project builds an ETL pipeline that extracts their data from S3, processes them using Spark running in AWS EMR Cluster, and loads the data 
back into S3 as a set of dimensional tables. This will allow their analytics team to continue finding insights in what songs their users are listening to.

## Files in the Repository

### data
a folder that contains sample datasets for testing locally.


### dl.cfg
a configuration file that holds the AWS credentials.<br>
This is only needed when running in local mode.


### etl.ipynb
a Jupyter notebook for you to exlore the datasets and test the processing logic.


### etl.py
loads raw datasets from S3 bucket, extract columns to create fact and dimensional tables, and writes data back into S3.


## How to Run the Scripts
The ETL pipeline is run in an AWS EMR cluster.<br>
1. Upload the `etl.py` file to an S3 bucket.
2. Create an output S3 bucket or an output folder in the above bucket.
3. Start an EMR cluster and add a Spark application step that points to the script file in S3.
4. Verify the results in the output bucket (or folder).<br>

Remember to shut down the EMR cluster when finished working with it to save cost.


## Tables Design
The tables employ a Star Schema with the purpose to optimize queries on song play analysis.<br>
The tables are written to S3 in parquet format with partitions where applicable.

### Fact Table
1. songplays - records in log data associated with song plays. Partitioned by year and month.


### Dimension Tables
1. users - users in the app.
2. songs - songs in music database. Partitioned by year and artist.
3. artists - artists in music database.
4. time - timestamps of records in songplays broken down into specific units. Partitioned by year and month.
