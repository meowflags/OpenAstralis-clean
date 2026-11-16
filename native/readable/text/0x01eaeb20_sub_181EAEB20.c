// sub_1EAEB20
// rva 0x01eaeb20  size 198  section .text  group text
// window base 0x181eaeb20: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1EAEB20(__int64 a1, __int64 a2, __int64 a3, __int64 a4, _DWORD *a5, int a6)
{
  _DWORD *v6; // r14
  __int64 v7; // r15
  __int64 result; // rax
  _DWORD *v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rdx
  _DWORD *v12; // rdx
  __int64 v13; // rdi
  __int64 v14; // r8
  __int64 v15; // r9
  int v16; // eax
  __int64 v17; // rbx
  unsigned __int64 v18; // rbp
  unsigned int v19; // esi
  unsigned __int64 v20; // r10
  unsigned __int64 i; // rdx
  __int64 v22; // rdx
  unsigned __int64 v23; // rbp
  unsigned __int64 j; // rbx
  _QWORD v25[44]; // [rsp-80h] [rbp-180h] BYREF
  unsigned int v26; // [rsp+E0h] [rbp-20h]
  int v27; // [rsp+E4h] [rbp-1Ch]
  char v28; // [rsp+F8h] [rbp-8h] BYREF

  result = a3;
  v9 = a5;
  if ( (unsigned __int64)&v28 <= *(_QWORD *)(v7 + 8) )
  {
    sub_1EB84E0(a1, a2, a3, a4: (_DWORD)a5, (_DWORD)a5, a6, a7: v28);
LABEL_18:
    sub_2771080();
    goto LABEL_19;
  }
  if ( a5 != v6 )
  {
    v10 = *a5 >> 3;
    if ( SHIWORD(v6[2 * v10 + 15]) < 3 || v6[2 * v6[2 * v10 + 4] + 5] != 20033 )
      result = sub_276FC00(a1, a2, a3: a5, a4: a5, a5: v6 + 10115918);
  }
  if ( v9 == v6 )
    goto LABEL_18;
  v11 = (unsigned int)v9[4];
  if ( (_DWORD)v11 == 47076562 )
    v12 = &v6[2 * v9[1]];
  else
    v12 = &v6[2 * v11];
  if ( v12 != v6 && *v12 >> 3 != 4261917 )
  {
LABEL_20:
    sub_276FC00(a1, a2, a3: v12, a4: v9, a5: v6 + 8523834);
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
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    v25[27] = v14;
    v25[26] = v15;
    v25[25] = v13;
    if ( (unsigned __int64)v25 > *(_QWORD *)(v7 + 8) )
    {
      if ( (_DWORD *)v14 != v6 )
      {
        v16 = *(_DWORD *)(v14 + 4);
        if ( v16 != 0 )
        {
          if ( v16 != 47082182 )
          {
            if ( v16 == 47082185 )
              v27 = *(unsigned __int8 *)(v14 + 20) ^ 1;
            else
              v27 = 0;
            v17 = *(_QWORD *)(v7 + 40);
            v18 = *(_QWORD *)(v7 + 32);
            v19 = *(_DWORD *)(v13 + 8);
            v26 = v19;
            v20 = (4LL * v19 + 19) & 0x7FFFFFFF8LL;
            v25[43] = 40464272;
            if ( v20 < 0x20000 && v20 + v17 <= v18 )
            {
              *(_QWORD *)(v7 + 40) = v20 + v17;
              *(_QWORD *)v17 = 40464272;
              *(_DWORD *)(v17 + 8) = v19;
              *(_DWORD *)(v17 + 12) = 0;
              if ( v20 - 16 < 0x800 )
              {
                for ( i = 16; v20 > i; i += 8LL )
                  *(_QWORD *)(v17 + i) = 0;
                v25[23] = v17;
                v22 = *(_QWORD *)(v7 + 40);
                v23 = *(_QWORD *)(v7 + 32);
                v25[41] = 40464384;
                if ( v20 + v22 <= v23 )
                {
                  *(_QWORD *)(v7 + 40) = v20 + v22;
                  *(_QWORD *)v22 = 40464384;
                  *(_DWORD *)(v22 + 8) = v19;
                  *(_DWORD *)(v22 + 12) = 0;
                  for ( j = 16; v20 > j; j += 8LL )
                    *(_QWORD *)(v22 + j) = 0;
                  v25[22] = v22;
                  if ( v16 == 47082185 )
                    JUMPOUT(0x303D38DBALL);
                  JUMPOUT(0x303D38DACLL);
                }
                JUMPOUT(0x181EB131BLL);
              }
              JUMPOUT(0x181EB166BLL);
            }
            JUMPOUT(0x181EB129ELL);
          }
          JUMPOUT(0x181EAF21FLL);
        }
        JUMPOUT(0x181EB1C10LL);
      }
      JUMPOUT(0x181EB1C0BLL);
    }
    JUMPOUT(0x181EB1C06LL);
  }
  if ( v12 == v6 )
  {
LABEL_19:
    sub_2771080();
    goto LABEL_20;
  }
  if ( *(int *)(v7 + 16) <= 0 )
    return sub_277F280();
  return result;
}
