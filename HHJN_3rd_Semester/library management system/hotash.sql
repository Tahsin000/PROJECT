-- phpMyAdmin SQL Dump
-- version 5.0.4
-- https://www.phpmyadmin.net/
--
-- Host: 127.0.0.1
-- Generation Time: May 21, 2021 at 07:21 PM
-- Server version: 10.4.17-MariaDB
-- PHP Version: 8.0.1

SET SQL_MODE = "NO_AUTO_VALUE_ON_ZERO";
START TRANSACTION;
SET time_zone = "+00:00";


/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8mb4 */;

--
-- Database: `hotash`
--

-- --------------------------------------------------------

--
-- Table structure for table `book`
--

CREATE TABLE `book` (
  `id` int(15) NOT NULL,
  `name` varchar(30) NOT NULL,
  `category` varchar(30) NOT NULL,
  `author` varchar(30) NOT NULL,
  `publisher` varchar(30) NOT NULL,
  `noofcopies` int(4) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

--
-- Dumping data for table `book`
--

INSERT INTO `book` (`id`, `name`, `category`, `author`, `publisher`, `noofcopies`) VALUES
(2, 'Perl Intermediate', 'Perl', 'Masud Salehi', 'Elsevier', 21),
(3, 'Python With Projects', 'Python', 'Feifei Chen', 'Springer ', 3),
(6, 'HHJN', 'java', 'asd', 'asd', 10),
(7, 'hotash', 'C++', 'sad', 'asd', 2),
(8, 'asd', 'C++', 'sad', 'asd', 2),
(9, 'asdasd', 'C++', 'sad', 'asd', 2),
(12, '', 'C++', 'sad', 'asd', 2);

-- --------------------------------------------------------

--
-- Table structure for table `category`
--

CREATE TABLE `category` (
  `id` int(240) NOT NULL,
  `category_name` varchar(42) NOT NULL,
  `status` varchar(32) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

--
-- Dumping data for table `category`
--

INSERT INTO `category` (`id`, `category_name`, `status`) VALUES
(3, 'C++', 'Active'),
(4, 'java', 'Active'),
(5, 'HHJN', 'Active');

-- --------------------------------------------------------

--
-- Table structure for table `issuebook`
--

CREATE TABLE `issuebook` (
  `id` int(11) NOT NULL,
  `memberid` varchar(32) NOT NULL,
  `bookname` varchar(25) NOT NULL,
  `date` date NOT NULL,
  `returndate` date NOT NULL,
  `membername` varchar(25) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

--
-- Dumping data for table `issuebook`
--

INSERT INTO `issuebook` (`id`, `memberid`, `bookname`, `date`, `returndate`, `membername`) VALUES
(25, 'C193065', 'Python With Projects', '2021-05-06', '2021-05-05', 'C193065'),
(26, 'C193065', 'HHJN', '2021-05-13', '2021-05-14', 'C193065'),
(27, 'C193065', 'hotash', '2021-05-07', '2021-05-20', 'C193065'),
(28, 'T193065', 'Python With Projects', '2021-05-06', '2021-05-20', 'T193065');

-- --------------------------------------------------------

--
-- Table structure for table `member`
--

CREATE TABLE `member` (
  `id` varchar(32) NOT NULL,
  `department` varchar(32) NOT NULL,
  `name` varchar(32) NOT NULL,
  `username` varchar(32) NOT NULL,
  `phone` varchar(32) NOT NULL,
  `password` varchar(32) NOT NULL,
  `identity` varchar(32) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

--
-- Dumping data for table `member`
--

INSERT INTO `member` (`id`, `department`, `name`, `username`, `phone`, `password`, `identity`) VALUES
('C193065', 'CSE', 'Tahsin', 'asd', '01245785', 'asd', 'Student'),
('T193065', 'CSE', 'Jamil', 'asd', '021548798', 'asd', 'Teacher');

-- --------------------------------------------------------

--
-- Table structure for table `tsingup`
--

CREATE TABLE `tsingup` (
  `id` varchar(32) NOT NULL,
  `department` varchar(32) NOT NULL,
  `name` varchar(32) NOT NULL,
  `username` varchar(32) NOT NULL,
  `phone` varchar(32) NOT NULL,
  `password` varchar(32) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

--
-- Dumping data for table `tsingup`
--

INSERT INTO `tsingup` (`id`, `department`, `name`, `username`, `phone`, `password`) VALUES
('1', '12', '12', '1', '12', '1');

--
-- Indexes for dumped tables
--

--
-- Indexes for table `book`
--
ALTER TABLE `book`
  ADD PRIMARY KEY (`id`);

--
-- Indexes for table `category`
--
ALTER TABLE `category`
  ADD PRIMARY KEY (`id`);

--
-- Indexes for table `issuebook`
--
ALTER TABLE `issuebook`
  ADD PRIMARY KEY (`id`);

--
-- Indexes for table `member`
--
ALTER TABLE `member`
  ADD UNIQUE KEY `id` (`id`);

--
-- Indexes for table `tsingup`
--
ALTER TABLE `tsingup`
  ADD PRIMARY KEY (`username`),
  ADD UNIQUE KEY `teacherid` (`id`);

--
-- AUTO_INCREMENT for dumped tables
--

--
-- AUTO_INCREMENT for table `book`
--
ALTER TABLE `book`
  MODIFY `id` int(15) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=13;

--
-- AUTO_INCREMENT for table `category`
--
ALTER TABLE `category`
  MODIFY `id` int(240) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=14;

--
-- AUTO_INCREMENT for table `issuebook`
--
ALTER TABLE `issuebook`
  MODIFY `id` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=29;
COMMIT;

/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
