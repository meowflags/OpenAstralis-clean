// sub_1EBC100
// rva 0x01ebc100  size 406  section .text  group text
// window base 0x181ebc100: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1EBC100(__int64 a1, __int64 a2)
{
  char *v2; // r14
  __int64 v3; // rax
  __int64 v4; // rcx
  char *v5; // rcx
  char *v6; // rdx
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rbx
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rax
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // rax

  sub_2781640(a1, a2, a3: v2 + 350570536);
  v3 = *((unsigned int *)v2 + 94164711);
  if ( (_DWORD)v3 != 0 )
  {
    v4 = *(_DWORD *)&v2[8 * v3] >> 3;
    if ( *(__int16 *)&v2[8 * v4 + 62] < 2 || *(_DWORD *)&v2[8 * *(unsigned int *)&v2[8 * v4 + 16] + 16] != 67220 )
      v3 = sub_276EAE0();
  }
  if ( (_DWORD)v3 != 0 )
  {
    if ( v2[8 * v3 + 12] != 0 )
      v5 = &v2[8 * v3];
    else
      v5 = v2;
    v6 = &v2[8 * *(unsigned int *)&v2[8 * v3 + 8]];
    v7 = (unsigned __int64)v5;
    while ( v6 != v2 )
    {
      if ( v6[12] != 0 )
      {
        if ( v5 == v2 )
        {
          v7 = (unsigned __int64)v6;
          v5 = v6;
        }
        else
        {
          if ( (char *)v7 == v2 )
          {
            sub_276EFE0();
            __builtin_debugtrap();
            __builtin_debugtrap();
            __builtin_debugtrap();
            __builtin_debugtrap();
            __builtin_debugtrap();
            __builtin_debugtrap();
            __builtin_debugtrap();
            __builtin_debugtrap();
            __builtin_debugtrap();
            __builtin_debugtrap();
            return sub_1EBC2A0();
          }
          if ( &v2[8 * *(unsigned int *)(v7 + 8)] == v6 )
          {
            v7 = (unsigned __int64)v6;
          }
          else
          {
            *(_DWORD *)(v7 + 8) = (unsigned __int64)(v6 - v2) >> 3;
            if ( (*(_DWORD *)v7 & 2) != 0 )
            {
              v8 = v7 & 0xFFFFFFFFFFF80000LL;
              v9 = (v7 - ((v7 & 0xFFFFFFFFFFF80000LL) + 2112)) >> 9;
              if ( *(_BYTE *)(v8 + v9 + 56) != 0 )
                *(_BYTE *)(v8 + v9 + 56) = 0;
              v7 = (unsigned __int64)v6;
            }
            else
            {
              v7 = (unsigned __int64)v6;
            }
          }
        }
      }
      v6 = &v2[8 * *((unsigned int *)v6 + 2)];
    }
  }
  else
  {
    v7 = (unsigned __int64)v2;
    v5 = v2;
  }
  if ( (char *)v7 != v2 )
    *(_DWORD *)(v7 + 8) = 0;
  *((_DWORD *)v2 + 94164711) = (unsigned __int64)(v5 - v2) >> 3;
  __faststorefence();
  v10 = (unsigned __int64)(v2 + 376658840);
  if ( (*((_DWORD *)v2 + 94164710) & 2) != 0 )
  {
    v12 = v10 & 0xFFFFFFFFFFF80000LL;
    v13 = (v10 - ((v10 & 0xFFFFFFFFFFF80000LL) + 2112)) >> 9;
    if ( *(_BYTE *)(v12 + v13 + 56) != 0 )
      *(_BYTE *)(v12 + v13 + 56) = 0;
  }
  return (__int64)v5;
}
