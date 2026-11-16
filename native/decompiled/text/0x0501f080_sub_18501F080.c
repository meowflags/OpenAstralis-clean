// sub_18501F080
// rva 0x0501f080  size 542  section .text  group text
// window base 0x18501f080: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_18501F080(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, int a6, char a7)
{
  __int64 v7; // rbx
  unsigned int v8; // ebp
  __int64 v9; // r14
  __int64 v10; // r15
  __int64 v11; // rcx
  unsigned int v13; // eax
  unsigned int v14; // ebp
  unsigned int v15; // ebx
  __int64 v16; // rdi
  __int64 v17; // rsi
  __int64 v18; // rdx
  __int64 v19; // rdi
  __int64 v20; // rsi
  unsigned __int64 v21; // rcx
  unsigned __int64 v22; // rbx
  __int64 v23; // [rsp+0h] [rbp-38h] BYREF
  _DWORD *v24; // [rsp+10h] [rbp-28h]
  __int64 v25; // [rsp+18h] [rbp-20h]
  __int64 v26; // [rsp+20h] [rbp-18h]
  unsigned int v27; // [rsp+28h] [rbp-10h]
  int v28; // [rsp+2Ch] [rbp-Ch]
  unsigned int v29; // [rsp+30h] [rbp-8h]
  int v30; // [rsp+34h] [rbp-4h]

  if ( (unsigned __int64)&v23 <= *(_QWORD *)(v10 + 8) )
  {
    MEMORY[0x181EB84E0]();
LABEL_19:
    v13 = MEMORY[0x182771080](a1, a2, a3, a4: v11);
    goto LABEL_20;
  }
  v11 = (unsigned int)(a6 - a5);
  if ( a6 <= (int)a5 )
    goto LABEL_3;
  v7 = (unsigned int)(a5 + 1);
  if ( a3 == v9 )
    goto LABEL_19;
  v13 = *(_DWORD *)(a3 + 8);
  if ( v13 <= (unsigned int)a5 )
  {
LABEL_20:
    v26 = a3;
    MEMORY[0x182771220](a1, a2, a3: (unsigned int)a5, a4: v11, a5: v13);
LABEL_21:
    v30 = v11;
    v29 = v7;
    v28 = a6;
    v26 = a3;
    goto LABEL_22;
  }
  v8 = *(_DWORD *)(a3 + 4LL * (unsigned int)a5 + 12);
  if ( (v8 & 0xFFFF0000) != 0 )
  {
    if ( HIWORD(v8) >= 0x11u )
      goto LABEL_21;
    v11 = (unsigned int)(v11 + 1);
  }
  while ( a6 > (int)v7 )
  {
    v14 = v7 + 1;
    if ( v13 <= (unsigned int)v7 )
    {
      v28 = a6;
      v26 = a3;
      MEMORY[0x182771220](a1, a2, a3: (unsigned int)v7, a4: v11, a5: v13);
      goto LABEL_29;
    }
    v15 = *(_DWORD *)(a3 + 4 * v7 + 12);
    if ( (v15 & 0xFFFF0000) != 0 )
    {
      if ( HIWORD(v15) >= 0x11u )
      {
        v30 = v11;
        v29 = v14;
        v28 = a6;
        v26 = a3;
        v8 = v15;
LABEL_22:
        v27 = v8;
        v25 = MEMORY[0x184F8C700](a1, a2, a3: v8);
        v18 = *(_QWORD *)(v10 + 40);
        if ( (unsigned __int64)(v18 + 40) <= *(_QWORD *)(v10 + 32) )
        {
          *(_QWORD *)(v10 + 40) = v18 + 40;
          *(_DWORD *)v18 = 34081944;
          *(_DWORD *)(v18 + 4) = 0;
          *(_QWORD *)(v18 + 8) = 0;
          *(_QWORD *)(v18 + 16) = 0;
          *(_QWORD *)(v18 + 24) = 0;
          *(_QWORD *)(v18 + 32) = 0;
          goto LABEL_24;
        }
LABEL_29:
        v18 = MEMORY[0x181EAA920](a1: v16, a2: v17, a3: 34081944);
LABEL_24:
        *(_DWORD *)(v18 + 20) = 46923644;
        *(_DWORD *)(v18 + 16) = *(_DWORD *)(v9 + 374343896);
        *(_DWORD *)(v18 + 12) = (unsigned __int64)(v18 - v9) >> 3;
        v24 = (_DWORD *)v18;
        sub_18503B9A0(a1: v16, a2: v17, a3: v18, a4: v18, a5: 0);
        v21 = (unsigned __int64)v24;
        v24[2] = (unsigned __int64)(v25 - v9) >> 3;
        if ( (*(_DWORD *)v21 & 2) != 0 )
          goto LABEL_26;
        while ( 1 )
        {
          MEMORY[0x182769900](a1: v19, a2: v20, a3: v21, a4: v21, a5: &a7);
LABEL_26:
          v22 = (v21 & 0xFFFFFFFFFFF80000LL) + 2112;
          if ( *(_BYTE *)((v21 & 0xFFFFFFFFFFF80000LL) + ((v21 - v22) >> 9) + 0x38) != 0 )
            *(_BYTE *)((v21 & 0xFFFFFFFFFFF80000LL) + ((v21 - v22) >> 9) + 0x38) = 0;
        }
      }
      v11 = (unsigned int)(v11 + 1);
      v7 = v14;
    }
    else
    {
      v7 = v14;
    }
  }
  a5 = (unsigned int)v7;
LABEL_3:
  if ( *(int *)(v10 + 16) <= 0 )
    MEMORY[0x18277F280](a1, a2, a3, a4: v11, a5);
  return (unsigned int)v11;
}
