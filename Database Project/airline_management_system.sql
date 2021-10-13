-- phpMyAdmin SQL Dump
-- version 4.9.2
-- https://www.phpmyadmin.net/
--
-- Host: 127.0.0.1
-- Generation Time: Jan 16, 2020 at 04:53 PM
-- Server version: 10.4.10-MariaDB
-- PHP Version: 7.3.12

SET SQL_MODE = "NO_AUTO_VALUE_ON_ZERO";
SET AUTOCOMMIT = 0;
START TRANSACTION;
SET time_zone = "+00:00";


/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8mb4 */;

--
-- Database: `airline management system`
--

-- --------------------------------------------------------

--
-- Table structure for table `aircrafts`
--

CREATE TABLE `aircrafts` (
  `Ac_ID` int(15) NOT NULL,
  `Ac_Number` varchar(15) NOT NULL,
  `Capacity` int(15) NOT NULL,
  `Manufactured_By` varchar(15) NOT NULL,
  `Manufactured_Date` date NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

--
-- Dumping data for table `aircrafts`
--

INSERT INTO `aircrafts` (`Ac_ID`, `Ac_Number`, `Capacity`, `Manufactured_By`, `Manufactured_Date`) VALUES
(3, 'PIA-700', 500, 'PIA', '0000-00-00'),
(6, '89', 943, 'Pakistan', '2015-03-06');

-- --------------------------------------------------------

--
-- Table structure for table `charges`
--

CREATE TABLE `charges` (
  `Charges_ID` int(15) NOT NULL,
  `Route_ID` int(15) NOT NULL,
  `Service_Charges` varchar(15) NOT NULL,
  `Fuel_Charges` varchar(15) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

--
-- Dumping data for table `charges`
--

INSERT INTO `charges` (`Charges_ID`, `Route_ID`, `Service_Charges`, `Fuel_Charges`) VALUES
(3, 76, '763', '8000');

-- --------------------------------------------------------

--
-- Table structure for table `contact_details`
--

CREATE TABLE `contact_details` (
  `Cnt_ID` int(15) NOT NULL,
  `Email` varchar(15) NOT NULL,
  `Cell` varchar(15) NOT NULL,
  `Telephone` varchar(15) NOT NULL,
  `Street` varchar(15) NOT NULL,
  `State_ID` int(15) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

-- --------------------------------------------------------

--
-- Table structure for table `countries`
--

CREATE TABLE `countries` (
  `Ct_ID` int(15) NOT NULL,
  `Ct_name` varchar(15) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

-- --------------------------------------------------------

--
-- Table structure for table `employees`
--

CREATE TABLE `employees` (
  `Emp_ID` int(15) NOT NULL,
  `Emp_name` varchar(15) NOT NULL,
  `Address` varchar(15) NOT NULL,
  `Designation` varchar(15) NOT NULL,
  `Email` varchar(15) NOT NULL,
  `Telep_no` varchar(15) NOT NULL,
  `Pilot_ID` int(15) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

-- --------------------------------------------------------

--
-- Table structure for table `flight_details`
--

CREATE TABLE `flight_details` (
  `Flight_ID` int(15) NOT NULL,
  `Flight_Date` date NOT NULL,
  `Departure_Time` datetime(6) NOT NULL,
  `Arrival_Time` datetime(6) NOT NULL,
  `Ac_ID` int(15) NOT NULL,
  `Charges_ID` int(15) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

-- --------------------------------------------------------

--
-- Table structure for table `passenger_details`
--

CREATE TABLE `passenger_details` (
  `Ps_ID` int(15) NOT NULL,
  `Ps_name` varchar(15) NOT NULL,
  `Gender` varchar(15) NOT NULL,
  `Age` int(15) NOT NULL,
  `Address` varchar(15) NOT NULL,
  `Nationalities` varchar(15) NOT NULL,
  `Cnt_ID` int(15) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

-- --------------------------------------------------------

--
-- Table structure for table `pilot_details`
--

CREATE TABLE `pilot_details` (
  `Pilot_ID` int(15) NOT NULL,
  `Pilot_Name` varchar(15) NOT NULL,
  `Address` varchar(15) NOT NULL,
  `Contact_no` int(15) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

--
-- Dumping data for table `pilot_details`
--

INSERT INTO `pilot_details` (`Pilot_ID`, `Pilot_Name`, `Address`, `Contact_no`) VALUES
(1, 'Fartash', 'Attock', 664454);

-- --------------------------------------------------------

--
-- Table structure for table `route`
--

CREATE TABLE `route` (
  `Route_ID` int(15) NOT NULL,
  `Airport` varchar(15) NOT NULL,
  `Destination` varchar(15) NOT NULL,
  `Route_Code` varchar(15) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

--
-- Dumping data for table `route`
--

INSERT INTO `route` (`Route_ID`, `Airport`, `Destination`, `Route_Code`) VALUES
(2, 'Attock', 'America', '753'),
(3, 'Islamabad', 'Pakistan', '876'),
(4, 'International', 'Bangkok', '346');

-- --------------------------------------------------------

--
-- Table structure for table `state`
--

CREATE TABLE `state` (
  `State_ID` int(15) NOT NULL,
  `State_name` varchar(15) NOT NULL,
  `Ct_ID` int(15) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

-- --------------------------------------------------------

--
-- Table structure for table `trasactions`
--

CREATE TABLE `trasactions` (
  `Ts_ID` int(15) NOT NULL,
  `Flight_ID` int(15) NOT NULL,
  `Ps_ID` int(15) NOT NULL,
  `Charges_ID` int(15) NOT NULL,
  `Emp_ID` int(15) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

--
-- Indexes for dumped tables
--

--
-- Indexes for table `aircrafts`
--
ALTER TABLE `aircrafts`
  ADD PRIMARY KEY (`Ac_ID`);

--
-- Indexes for table `charges`
--
ALTER TABLE `charges`
  ADD PRIMARY KEY (`Charges_ID`);

--
-- Indexes for table `contact_details`
--
ALTER TABLE `contact_details`
  ADD PRIMARY KEY (`Cnt_ID`);

--
-- Indexes for table `countries`
--
ALTER TABLE `countries`
  ADD PRIMARY KEY (`Ct_ID`);

--
-- Indexes for table `employees`
--
ALTER TABLE `employees`
  ADD PRIMARY KEY (`Emp_ID`);

--
-- Indexes for table `flight_details`
--
ALTER TABLE `flight_details`
  ADD PRIMARY KEY (`Flight_ID`);

--
-- Indexes for table `passenger_details`
--
ALTER TABLE `passenger_details`
  ADD PRIMARY KEY (`Ps_ID`);

--
-- Indexes for table `pilot_details`
--
ALTER TABLE `pilot_details`
  ADD PRIMARY KEY (`Pilot_ID`);

--
-- Indexes for table `route`
--
ALTER TABLE `route`
  ADD PRIMARY KEY (`Route_ID`);

--
-- Indexes for table `state`
--
ALTER TABLE `state`
  ADD PRIMARY KEY (`State_ID`);

--
-- Indexes for table `trasactions`
--
ALTER TABLE `trasactions`
  ADD PRIMARY KEY (`Ts_ID`);

--
-- AUTO_INCREMENT for dumped tables
--

--
-- AUTO_INCREMENT for table `aircrafts`
--
ALTER TABLE `aircrafts`
  MODIFY `Ac_ID` int(15) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=8;

--
-- AUTO_INCREMENT for table `charges`
--
ALTER TABLE `charges`
  MODIFY `Charges_ID` int(15) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=4;

--
-- AUTO_INCREMENT for table `contact_details`
--
ALTER TABLE `contact_details`
  MODIFY `Cnt_ID` int(15) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=66;

--
-- AUTO_INCREMENT for table `countries`
--
ALTER TABLE `countries`
  MODIFY `Ct_ID` int(15) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=58;

--
-- AUTO_INCREMENT for table `employees`
--
ALTER TABLE `employees`
  MODIFY `Emp_ID` int(15) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=2;

--
-- AUTO_INCREMENT for table `flight_details`
--
ALTER TABLE `flight_details`
  MODIFY `Flight_ID` int(15) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=2;

--
-- AUTO_INCREMENT for table `passenger_details`
--
ALTER TABLE `passenger_details`
  MODIFY `Ps_ID` int(15) NOT NULL AUTO_INCREMENT;

--
-- AUTO_INCREMENT for table `pilot_details`
--
ALTER TABLE `pilot_details`
  MODIFY `Pilot_ID` int(15) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=2;

--
-- AUTO_INCREMENT for table `route`
--
ALTER TABLE `route`
  MODIFY `Route_ID` int(15) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=5;

--
-- AUTO_INCREMENT for table `state`
--
ALTER TABLE `state`
  MODIFY `State_ID` int(15) NOT NULL AUTO_INCREMENT;

--
-- AUTO_INCREMENT for table `trasactions`
--
ALTER TABLE `trasactions`
  MODIFY `Ts_ID` int(15) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=2;
COMMIT;

/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
