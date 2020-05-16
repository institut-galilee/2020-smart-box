-- phpMyAdmin SQL Dump
-- version 4.8.5
-- https://www.phpmyadmin.net/
--
-- Hôte : 127.0.0.1:3306
-- Généré le :  lun. 20 avr. 2020 à 21:31
-- Version du serveur :  5.7.26
-- Version de PHP :  7.2.18

SET SQL_MODE = "NO_AUTO_VALUE_ON_ZERO";
SET AUTOCOMMIT = 0;
START TRANSACTION;
SET time_zone = "+00:00";


/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8mb4 */;

--
-- Base de données :  `iot`
--

-- --------------------------------------------------------

--
-- Structure de la table `profil`
--

CREATE TABLE `profil` (
  `username` varchar(20) NOT NULL,
  `password` varchar(20) NOT NULL,
  'confirmpassw'varchar(20) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

--
-- Déchargement des données de la table `profil`
--

INSERT INTO `profil` (`username`, `password`,'confirmpassw') VALUES
('admin', 'admin','admin'),
('kahina','kahina','kahina');

--
-- Index pour les tables déchargées
--

--
-- Index pour la table `profil`
--
ALTER TABLE `profil`
  ADD PRIMARY KEY (`username`);
COMMIT;



--
-- Structure de la table `data`
--

DROP TABLE IF EXISTS `data`;
CREATE TABLE IF NOT EXISTS `data` (
  `id` int(11) NOT NULL AUTO_INCREMENT,
  `humidite` varchar(10) DEFAULT NULL,
  `temperature` varchar(10) DEFAULT NULL,
  `lat` varchar(20) DEFAULT NULL,
  `lon` varchar(20) DEFAULT NULL,
  `photo` varchar(10) DEFAULT NULL,
  PRIMARY KEY (`id`)
) ENGINE=MyISAM AUTO_INCREMENT=17 DEFAULT CHARSET=utf8;

--
-- Déchargement des données de la table `data`
--

INSERT INTO `data` (`id`, `humidite`, `temperature`, `lat`, `lon`, `photo`) VALUES
(1, '46', '53', '28.545799', '77.170303', 'etat.jpg'),
(2, '46', '53', '28.545799', '77.170303', 'etat.jpg'),
(3, '46', '53', '28.545799', '77.170303', 'etat.jpg'),
(4, '46', '53', '28.545799', '77.170303', 'etat.jpg'),
(5, '46', '53', '28.545799', '77.170303', 'etat.jpg'),
(6, '46', '53', '28.545799', '77.170303', 'etat.jpg'),
(7, '46', '53', '28.545799', '77.170303', 'etat.jpg'),
(8, '46', '53', '28.545799', '77.170303', 'etat.jpg'),
(9, '46', '53', '28.545799', '77.170303', 'etat.jpg'),
(10, '46', '53', '28.545799', '77.170303', 'etat.jpg'),
(11, '46', '53', '28.545799', '77.170303', 'etat.jpg'),
(12, '46', '53', '28.545799', '77.170303', 'etat.jpg'),
(13, '46', '53', '28.545799', '77.170303', 'etat.jpg'),
(14, '46', '53', '28.545799', '77.170303', 'etat.jpg'),
(15, '46', '53', '28.545799', '77.170303', 'etat.jpg'),
(16, '46', '53', '28.545799', '77.170303', 'etat.jpg');
COMMIT;

/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
