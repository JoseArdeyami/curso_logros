USE escuela;

CREATE TABLE Estudiantes (
    id INT AUTO_INCREMENT PRIMARY KEY,
    nombre VARCHAR(255) NOT NULL,
    edad INT,
    grado VARCHAR(255)
);

USE Escuela;

INSERT INTO Estudiantes (nombre, edad, grado) VALUES
('Juan', 15, '10º'),
('Maria', 16, '11º'),
('Carlos', 14, '9º');

USE Escuela;

SELECT * FROM Estudiantes;

USE Escuela;

SELECT * FROM Estudiantes WHERE edad >= 15;

USE Escuela;

UPDATE Estudiantes
SET edad = 16
WHERE nombre = 'Juan';

USE Escuela;

DELETE FROM Estudiantes
WHERE nombre = 'Carlos';

USE Escuela;

SELECT * FROM Estudiantes
ORDER BY edad ASC;

USE Escuela;

SELECT COUNT(*) FROM Estudiantes;

USE Escuela;

SELECT * FROM Estudiantes
WHERE grado = '10º' AND edad = 15;
