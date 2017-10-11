CREATE TABLE premia (
    id VARCHAR(20) PRIMARY KEY,
    premia NUMERIC

);

CREATE TABLE dzialy (
    id INTEGER PRIMARY KEY,
    nazwa VARCHAR(40),
    siedziba VARCHAR(40)
);

CREATE TABLE pracownicy (
    id VARCHAR(6) PRIMARY KEY,
    nazwisko VARCHAR(25),
    imie VARCHAR(20),
    stanowisko VARCHAR(25),
    data_zatrudnienia VARCHAR(23),
    placa NUMERIC,
    premia NUMERIC,
    id_dzial INTEGER,
    FOREIGN KEY(stanowisko)REFERENCES premia(id),
    FOREIGN KEY(id_dzial)REFERENCES dzialy(id)
);
