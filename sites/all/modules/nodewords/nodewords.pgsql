-- $Id: nodewords.pgsql,v 1.1 2005/11/17 09:16:41 robrechtj Exp $
--
-- Table structure for metatags
--
CREATE TABLE nodewords (
  type varchar(16) NOT NULL,
  id varchar(255) NOT NULL,
  name varchar(32) NOT NULL,
  content varchar(255) NULL,
  PRIMARY KEY(type, id, name)
);
