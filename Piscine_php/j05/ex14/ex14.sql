SELECT floor_number AS 'floor', SUM(nb_seats) as 'seats'
  FROM cinema c
  GROUP BY c.floor_number
  ORDER BY SUM(nb_seats);