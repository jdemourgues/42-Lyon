SELECT count(*)
	AS 'films'
    FROM member_history
    WHERE
    	(date >= '2006-10-30'
         		AND date <= '2007-07-27')
    	OR (month(date) = 12
                AND day(date) = 24);