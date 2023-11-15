# SQL Tutorial

## Select, Distinct, Count Statement
- How to select data
    ```SQL
    SELECT columnName1, columnName2, ... ColumnNameN from tableName;
    ```

- How to select distinct (different) data
    ```SQL
    SELECT DISTINCT columnName1, columnName2, ... ColumnNameN from tableName;
    ```
- How to count distinct data
    ```SQL
    SELECT COUNT(DISTINCT columnName) from tableName;
    ```
- How to filter data using ```Where Clause```
    ```SQL
    SELECT * FROM tableName WHERE columnName = filterationValue;
    ```
    Note: **The `WHERE` clause is not only used in `SELECT` statements, it is also used in `UPDATE`, `DELETE`, etc.!**

- 