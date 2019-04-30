{\rtf1\ansi\ansicpg1252\cocoartf1504\cocoasubrtf830
{\fonttbl\f0\fmodern\fcharset0 Courier;}
{\colortbl;\red255\green255\blue255;\red0\green0\blue0;}
{\*\expandedcolortbl;;\cssrgb\c0\c0\c0;}
\paperw11900\paperh16840\margl1440\margr1440\vieww10800\viewh8400\viewkind0
\deftab720
\pard\pardeftab720\sl280\partightenfactor0

\f0\fs24 \cf2 \expnd0\expndtw0\kerning0
\outl0\strokewidth0 \strokec2 /* ************************************************************************** */\
/*                                                                            */\
/*                                                        :::      ::::::::   */\
/*   cycle_detector.c                                   :+:      :+:    :+:   */\
/*                                                    +:+ +:+         +:+     */\
/*   By: fwuensch <fwuensch@student.42.fr>          +#+  +:+       +#+        */\
/*                                                +#+#+#+#+#+   +#+           */\
/*   Created: 2019/02/05 12:20:46 by salquier          #+#    #+#             */\
/*   Updated: 2019/03/25 15:16:27 by fwuensch         ###   ########.fr       */\
/*                                                                            */\
/* ************************************************************************** */\
\
// DO REFERENCE, BUT DO NOT PUSH THIS FILE\
#include "list.h"\
\
int        cycle_detector(const t_list *list)\
\{\
	const t_list	*slow;\
	const t_list	*fast;\
\
	slow = list;\
	fast = list;\
	if (!list)\
		return (0);\
	while (fast && fast->next)\
	\{\
		slow = slow->next;\
		fast = fast->next->next;\
		if (fast == slow)\
			return (1);\
	\}\
	return (0);\
\}\
}