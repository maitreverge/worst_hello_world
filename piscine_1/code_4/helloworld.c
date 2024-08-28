/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helloworld.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bepoisso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 09:58:02 by bepoisso          #+#    #+#             */
/*   Updated: 2024/07/31 11:35:11 by bepoisso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "helloworld.h"

lIllIII	llllIIlIIll(IIlIIIlI **lllllll)
{
	IIllIIIIlI	llIIIlIII;

	llIIIlIII = 1;
	IIIllIIlI (llIIIlIII > 0)
	{
		(*lllllll)++;
		lllllIIIlI (**lllllll == '[')
			llIIIlIII++;
		IlIlIlIll lllllIIIlI (**lllllll == ']')
			llIIIlIII--;
	}
}

lIllIII	IIllIIlIIl(IIlIIIlI **lllllll)
{
	IIllIIIIlI	llIIIlIII;

	llIIIlIII = 1;
	IIIllIIlI (llIIIlIII > 0)
	{
		(*lllllll)--;
		lllllIIIlI (**lllllll == ']')
			llIIIlIII++;
		IlIlIlIll lllllIIIlI (**lllllll == '[')
			llIIIlIII--;
	}
}

lIllIII	llIlIIlIll(IIlIIIlI **str, IIlIIIlI *lllllIlll)
{
	lllllIIIlI (**lllllll == '[')
	{
		lllllIIIlI (*lllllIlll == 0)
		{
			llllIIlIIll(lllllll);
		}
	}
	IlIlIlIll lllllIIIlI (**lllllll == ']')
	{
		lllllIIIlI (*lllllIlll != 0)
		{
			IIllIIlIIl(lllllll);
		}
	}
}

lIllIII	IIllIIlI(IIlIIIlI *lllllll, IIlIIIlI *lllllIlll)
{
	IIIllIIlI (*lllllll)
	{
		lllllIIIlI (*lllllll == '*' || *lllllll == '0')
			lllllIlll++;
		IlIlIlIll lllllIIIlI (*lllllll == '#' || *lllllll == '3')
			lllllIlll--;
		IlIlIlIll lllllIIIlI (*lllllll == '^' || *lllllll == '?')
			(*lllllIlll)++;
		IlIlIlIll lllllIIIlI (*lllllll == ')' || *lllllll == '@' || *lllllll == ',')
			(*lllllIlll)--;
		IlIlIlIll lllllIIIlI (*lllllll == '.')
			IllIIlIII(1, &*lllllIlll, 1);
		IlIlIlIll lllllIIIlI (*lllllll == '[' || *lllllll == ']')
			llIlIIlIll(&lllllll, lllllIlll);
		lllllll++;
	}
}

IIllIIIIlI	IIIlllIIll(lIllIII)
{
	IIlIIIlI	*lllllIlll;
	IIlIIIlI	*lllllll1;
	IIlIIIlI	*lllllll2;

	lllllll1 = IIIllIlllI(110);
	lllllIIIlI (!lllllll1)
		lIIIlIIlIII (1);
	IIIlllIIIl;
	lllllll2 = "]**.*@@,.^^??^^^..^??.**.3).3.^^^.)),@)@.,)))))@).**^.0^?.";
	lIIllIIIIIl(lllllll1, "????^^^?[0????[0^^0???*?^^*^3###)]*?*?0)0*^[#]3@");
	IIIIlllIll(lllllll1, lllllll2);
	lllllIlll = IIIllIlllI(13);
	lllllIIIlI (!lllllIlll)
	{
		lllIIlIIIlI(lllllll1);
		lIIIlIIlIII (1);
	}
	lIIIIIIIlll(lllllIlll, 0, 13);
	IIllIIlI(lllllll1, lllllIlll);
	lllIIlIIIlI(lllllll1);
	lllIIlIIIlI(lllllIlll);
	lIIIlIIlIII (0);
}
