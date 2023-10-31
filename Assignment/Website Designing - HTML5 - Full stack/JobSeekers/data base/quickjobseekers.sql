-- phpMyAdmin SQL Dump
-- version 3.2.0.1
-- http://www.phpmyadmin.net
--
-- Host: localhost
-- Generation Time: Mar 15, 2016 at 12:14 PM
-- Server version: 5.1.37
-- PHP Version: 5.3.0

SET SQL_MODE="NO_AUTO_VALUE_ON_ZERO";


/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8 */;

--
-- Database: `quickjobseekers`
--

-- --------------------------------------------------------

--
-- Table structure for table `job_entry`
--

CREATE TABLE IF NOT EXISTS `job_entry` (
  `id` int(11) NOT NULL AUTO_INCREMENT,
  `job_code` varchar(25) NOT NULL,
  `company_name` varchar(40) NOT NULL,
  `user_code` varchar(50) NOT NULL,
  `post_title` varchar(60) NOT NULL,
  `salary` decimal(10,2) NOT NULL,
  `job_location` varchar(35) NOT NULL,
  `requirement` varchar(20) NOT NULL,
  `experience` varchar(15) NOT NULL,
  `no_of_post` varchar(35) NOT NULL,
  PRIMARY KEY (`id`)
) ENGINE=MyISAM DEFAULT CHARSET=latin1 AUTO_INCREMENT=1 ;

--
-- Dumping data for table `job_entry`
--


-- --------------------------------------------------------

--
-- Table structure for table `registration`
--

CREATE TABLE IF NOT EXISTS `registration` (
  `user_code` varchar(35) NOT NULL,
  `qualification` varchar(30) NOT NULL,
  `technical_skills` varchar(50) NOT NULL,
  `address` varchar(270) NOT NULL,
  `city` varchar(30) NOT NULL,
  `state` varchar(35) NOT NULL,
  `nationality` varchar(45) NOT NULL,
  `pin_code` int(8) NOT NULL,
  `job_area` varchar(40) NOT NULL,
  `job_location` varchar(30) NOT NULL,
  `job_title` varchar(45) NOT NULL,
  `photo` varchar(80) NOT NULL,
  `experience` varchar(25) NOT NULL,
  `job_start_date` date NOT NULL,
  `job_end_date` date NOT NULL,
  `organization_name` varchar(230) NOT NULL,
  `salary` decimal(10,2) NOT NULL,
  `post` varchar(40) NOT NULL,
  `company_name` varchar(70) NOT NULL,
  `location` varchar(30) NOT NULL,
  `working_area` varchar(50) NOT NULL,
  `technologies` varchar(65) NOT NULL,
  `contact_person` varchar(60) NOT NULL,
  `designation` varchar(70) NOT NULL,
  `mail_id` varchar(40) NOT NULL
) ENGINE=MyISAM DEFAULT CHARSET=latin1;

--
-- Dumping data for table `registration`
--

INSERT INTO `registration` (`user_code`, `qualification`, `technical_skills`, `address`, `city`, `state`, `nationality`, `pin_code`, `job_area`, `job_location`, `job_title`, `photo`, `experience`, `job_start_date`, `job_end_date`, `organization_name`, `salary`, `post`, `company_name`, `location`, `working_area`, `technologies`, `contact_person`, `designation`, `mail_id`) VALUES
('0', 'mca', 'software', 'indore', 'indore', 'Madhya Pradesh', 'india', 452001, 'udaipur', 'udaipur', 'php', '', '2', '0000-00-00', '0000-00-00', '', '3.00', 'hr', 'gourav', 'udaipur', 'udaipur', 'software testing', '985666555', '5', 'gouravmodi4567@gmail.com'),
('0', 'm.a', '8', '8', '8', '5', '5', 2, '', '22', '22', '2', '2', '0000-00-00', '0000-00-00', '2', '2.00', '222', '2', '2', '', '22', '2', '2', '2'),
('0', '', '', '', '', '', '', 0, '', '', '', '', '', '0000-00-00', '0000-00-00', '', '0.00', '', '', '', '', '', '', '', '');

-- --------------------------------------------------------

--
-- Table structure for table `resume_upload`
--

CREATE TABLE IF NOT EXISTS `resume_upload` (
  `id` int(11) NOT NULL AUTO_INCREMENT,
  `user_code` varchar(20) NOT NULL,
  `resume` varchar(355) NOT NULL,
  PRIMARY KEY (`id`)
) ENGINE=MyISAM DEFAULT CHARSET=latin1 AUTO_INCREMENT=1 ;

--
-- Dumping data for table `resume_upload`
--


-- --------------------------------------------------------

--
-- Table structure for table `user`
--

CREATE TABLE IF NOT EXISTS `user` (
  `id` int(11) NOT NULL AUTO_INCREMENT,
  `user_code` varchar(30) NOT NULL,
  `name1` varchar(50) NOT NULL,
  `password` varchar(15) NOT NULL,
  `types` varchar(40) NOT NULL,
  `status` varchar(10) NOT NULL,
  `contact` varchar(15) NOT NULL,
  `email_id` varchar(35) NOT NULL,
  `hint` varchar(130) NOT NULL,
  PRIMARY KEY (`id`)
) ENGINE=MyISAM  DEFAULT CHARSET=latin1 AUTO_INCREMENT=5 ;

--
-- Dumping data for table `user`
--

INSERT INTO `user` (`id`, `user_code`, `name1`, `password`, `types`, `status`, `contact`, `email_id`, `hint`) VALUES
(1, '1', '1', '1', '1', '1', '1', '1', '1'),
(2, 'mohan', '12345', '9', '9', '9', '9', '9', '9'),
(3, 'mohan', '12345', '9', '9', '9', '9', '9', '9'),
(4, '4562', 'gourav', 'gourav', '5', '65', '896658862', 'gouravmodi4567@gmail.com', '7');

/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
