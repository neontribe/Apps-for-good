## Dumping the database

The contents of the current.sql shuld be an ordered and filtered dump.  Use this command to dump the db before checking in.

    drush sql-dump --skip-tables-key=common --result-file=sites/default/dbdump/current.sql --ordered-dump
