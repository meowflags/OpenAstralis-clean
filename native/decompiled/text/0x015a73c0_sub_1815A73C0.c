// sub_1815A73C0
// rva 0x015a73c0  size 602  section .text  group text
// window base 0x1815a73c0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
void __fastcall sub_1815A73C0(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        unsigned __int64 a5,
        unsigned int *a6)
{
  __int64 v6; // rbx
  unsigned __int64 v7; // rbp
  __int64 v8; // r13
  _DWORD *v9; // r14
  __int64 v10; // r15
  unsigned __int64 v11; // rcx
  __int64 v12; // rax
  _DWORD *v13; // rax
  _DWORD *v14; // rsi
  unsigned __int64 v15; // r9
  unsigned __int64 v16; // rsi
  unsigned __int64 v17; // rax
  __int64 v18; // [rsp+0h] [rbp-38h] BYREF
  _DWORD *v19; // [rsp+8h] [rbp-30h]
  _DWORD *v20; // [rsp+10h] [rbp-28h]
  unsigned int *v21; // [rsp+18h] [rbp-20h]
  unsigned __int64 v22; // [rsp+20h] [rbp-18h]
  unsigned __int64 v23; // [rsp+28h] [rbp-10h]
  unsigned int v24; // [rsp+30h] [rbp-8h]
  unsigned int v25; // [rsp+34h] [rbp-4h]

  v23 = a5;
  if ( (unsigned __int64)&v18 <= *(_QWORD *)(v10 + 8) )
  {
    MEMORY[0x181EB84E0](a1, a2: a3);
LABEL_30:
    MEMORY[0x182771220](a1, a2: v22, a3: v24, a4: v11, a5: (unsigned int)v11, a6: v21);
LABEL_31:
    MEMORY[0x182771220](a1: v23, a2: v22, a3: (unsigned int)v7, a4: v11, a5: (unsigned int)v6);
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    sub_1815A7620();
  }
  else
  {
    v22 = a3;
    v21 = a6;
    v11 = *(unsigned int *)(a5 + 8);
    v25 = *(_DWORD *)(a5 + 8);
    v6 = 0;
    while ( 1 )
    {
      v24 = v6;
      if ( (int)v11 <= (int)v6 )
        break;
      if ( (unsigned int)v11 <= (unsigned int)v6 )
        goto LABEL_30;
      v12 = *(unsigned int *)(a5 + 4 * v6 + 12);
      *(_DWORD *)(a5 + 4 * v6 + 12) = 0;
      v13 = &v9[2 * v12];
      while ( v13 != v9 )
      {
        v7 = v8 + *(_QWORD *)&v9[2 * (*v13 >> 3) + 38];
        v14 = &v9[2 * v13[6]];
        v20 = v13;
        v19 = v14;
        if ( (_DWORD *)((__int64 (__fastcall *)(__int64, _DWORD *, _DWORD *))v7)(a1, a2: v14, a3: v13) == v9 )
        {
          v11 = (unsigned __int64)v20;
          v16 = v22;
          v20[6] = 0;
          *(_DWORD *)(v11 + 20) = 0;
          --*(_DWORD *)(v16 + 36);
          v13 = v19;
        }
        else
        {
          v11 = (unsigned __int64)v20;
          v15 = (unsigned __int64)v21;
          LODWORD(v6) = v21[2];
          v7 = v20[7] & (unsigned int)(v6 - 1);
          if ( (unsigned int)v6 <= (unsigned int)v7 )
            goto LABEL_31;
          v20[6] = v21[v7 + 3];
          if ( (*(_DWORD *)v11 & 2) != 0 )
          {
            a5 = (v11 & 0xFFFFFFFFFFF80000LL) + 2112;
            if ( *(_BYTE *)((v11 & 0xFFFFFFFFFFF80000LL) + ((v11 - a5) >> 9) + 0x38) != 0 )
              *(_BYTE *)((v11 & 0xFFFFFFFFFFF80000LL) + ((v11 - a5) >> 9) + 0x38) = 0;
          }
          *(_DWORD *)(v15 + 4 * v7 + 12) = (v11 - (unsigned __int64)v9) >> 3;
          a3 = *(unsigned int *)v15;
          if ( (a3 & 2) != 0 )
          {
            if ( (a3 & 1) != 0 )
            {
              a3 = v15 - *(_QWORD *)(v15 - 8);
              a5 = v15;
              v17 = (4 * v7 + 12) >> 9;
              if ( *(_BYTE *)(a3 + v17 + 48) != 0 )
                *(_BYTE *)(a3 + v17 + 48) = 0;
              v13 = v19;
            }
            else
            {
              a3 = v15 & 0xFFFFFFFFFFF80000LL;
              a5 = (v15 - ((v15 & 0xFFFFFFFFFFF80000LL) + 2112)) >> 9;
              if ( *(_BYTE *)((v15 & 0xFFFFFFFFFFF80000LL) + a5 + 0x38) != 0 )
                *(_BYTE *)(a3 + a5 + 56) = 0;
              v13 = v19;
            }
          }
          else
          {
            v13 = v19;
          }
        }
      }
      v6 = v24 + 1;
      if ( *(int *)(v10 + 16) <= 0 )
        MEMORY[0x18277F280](a1, a2: v22, a3, a4: v11, a5, a6: v21);
      v11 = v25;
      a5 = v23;
    }
    if ( *(int *)(v10 + 16) <= 0 )
      MEMORY[0x18277F280](a1, a2: v22, a3, a4: v11, a5, a6: v21);
  }
}
