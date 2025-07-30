/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsanyas <jsanyas@student.42perpignan.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 10:19:32 by jsanyas           #+#    #+#             */
/*   Updated: 2025/07/29 08:06:16 by jsanyas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//To unscrew this: printf("%s\n", the_word);
//	./a.out >> hello_world.sh
#define THE_WORD_01 "echo -n $(ls -arl / | tr -d \" \" "
#define THE_WORD_02	"| tr -d \"QWERTYUIOPASDFGJKLZXCVBNM"
#define THE_WORD_03 "qwertyuiopasdfgjklzxcvbnm1234567890\\-/.:^+?_>\\n\" "
#define THE_WORD_04	"| cut -c1-1 | sed s/h/H/);"
#define THE_WORD_05 "echo -n $(ls -arl / | tr -d \" \" "
#define THE_WORD_06	"| tr -d \"QWERTYUIOPASDFGJKLZXCVBNM"
#define THE_WORD_07 "qwrtyuiopasdfghjklzxcvbnm1234567890\\-/.:^+?_>\\n\" "
#define THE_WORD_08	"| cut -c1-1);echo -n $(ls -arl / | tr -d \" \" "
#define THE_WORD_09	"| tr -d \"QWERTYUIOPASDFGJKLZXCVBNM"
#define THE_WORD_10 "qwertyuiopasdfghjkzxcvbnm1234567890\\-/.:^+?_>\\n\" "
#define THE_WORD_11	"| cut -c1-2);echo -n $(ls -arl / "
#define THE_WORD_12	"| tr -d \"QWERTYUIOPASDFGJKLZXCVBNM"
#define THE_WORD_13 "qwertyuiopasdfghjklzxcvbnm1234567890\\-/.:^+?_>\\n\" "
#define THE_WORD_14	"| cut -c1-1);echo -n $(ls -arl / "
#define THE_WORD_15	"| tr -d \"QWERTYUIOPASDFGJKLZXCVBNM"
#define THE_WORD_16 "qwertyuipasdfghjklzxcvbnm1234567890\\-/.:^+?_>\\n\""
#define THE_WORD_17	"| cut -c1-1);echo -n \", \""
#define THE_WORD_18	""
#define THE_WORD_19 ""
#define THE_WORD_20	";echo -n $(ls -arl / | tr -d \" \" "
#define THE_WORD_21	"| tr -d \"QWERTYUIOPASDFGJKLZXCVBNM"
#define THE_WORD_22 "qertyuiopasdfghjklzxcvbnm1234567890\\-/.:^+?_>\\n\" "
#define THE_WORD_23	"| cut -c1-1 | sed s/w/W/);"
#define THE_WORD_24 "echo -n $(ls -arl / | tr -d \" \" "
#define THE_WORD_25	"| tr -d \"QWERTYUIOPASDFGJKLZXCVBNM"
#define THE_WORD_26 "qwertyuipasdfghjklzxcvbnm1234567890\\-/.:^+?_>\\n\" "
#define THE_WORD_27	"| cut -c1-1);echo -n $(ls -arl / | tr -d \" \" "
#define THE_WORD_28	"| tr -d \"QWERTYUIOPASDFGJKLZXCVBNM"
#define THE_WORD_29 "qwetyuiopasdfghjklzxcvbnm1234567890\\-/.:^+?_>\\n\" "
#define THE_WORD_30	"| cut -c1-1);echo -n $(ls -arl / | tr -d \" \" "
#define THE_WORD_31	"| tr -d \"QWERTYUIOPASDFGJKLZXCVBNM"
#define THE_WORD_32 "qwertyuiopasdfghjkzxcvbnm1234567890\\-/.:^+?_>\\n\" "
#define THE_WORD_33	"| cut -c1-1);echo -n $(ls -arl / | tr -d \" \" "
#define THE_WORD_34	"| tr -d \"QWERTYUIOPASDFGJKLZXCVBNM"
#define THE_WORD_35 "qwertyuiopasfghjklzxcvbnm1234567890\\-/.:^+?_>\\n\" "
#define THE_WORD_36	"| cut -c1-1);echo -n $(ls -arl / | tr -d \" \" "
#define THE_WORD_37	"| tr -d \"QWERTYUIOPASDFGJKLZXCVBNM"
#define THE_WORD_38 "qwertyuiopasdfghjklzxcvbnm1234567890\\-/.:^+?_>\" "
#define THE_WORD_39	"| cut -c1-1); echo \"!\";"
