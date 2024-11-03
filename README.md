# BMI Calculator in C

## Overview

This BMI Calculator is a simple console-based application written in C. It calculates Body Mass Index (BMI) based on the user's weight (in kilograms) and height (in meters). The program then categorizes the BMI into different health ranges (e.g., underweight, healthy weight, overweight, obese) based on age-specific standards. This tool is useful for a quick BMI calculation and health range estimation.

## Features

- **Age Check**: The calculator adjusts BMI categories based on whether the user is an adult (20 years or older) or a child (under 20).
- **Color Coding**: The program changes the console color based on BMI categories for easy visualization:
  - Red (`Color 04`) for obesity
  - Yellow (`Color 06`) for overweight
  - Green (`Color 0A`) for a healthy range

## Usage

1. When prompted, enter your age, name, weight (in kilograms), and height (in meters).
2. The program will display your BMI along with a message indicating whether you are in a healthy range, overweight, or obese based on your BMI score.
3. For adults (age 20 or older), the BMI categories are:
   - **Obese**: BMI ≥ 40.0
   - **Overweight**: 25.0 ≤ BMI < 40.0
   - **Healthy Range**: 18.5 ≤ BMI < 25.0
   - **Underweight**: BMI < 18.5

   For children (under age 20), the categories differ slightly:
   - **Obese**: BMI ≥ 95.0
   - **Overweight**: 85.0 ≤ BMI < 95.0
   - **Healthy Range**: 5.0 ≤ BMI < 85.0
   - **Underweight**: BMI < 5.0

### Example

```plaintext
BMI Calculator
Enter Your Age : 25

Enter Your Name : John Doe

Enter Your Weight in KG : 70

Enter Your Height in Meters : 1.75

Hi! John Doe
Your BMI is 22.857143, and Your BMI is within a healthy range
