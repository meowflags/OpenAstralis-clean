// sub_1850317A0
// rva 0x050317a0  size 629  section .text  group text
// window base 0x1850317a0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1850317A0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, unsigned int a5, int a6, char a7)
{
  __int64 v7; // r14
  __int64 v8; // r15
  int v9; // eax
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 result; // rax
  __int64 v13; // rdx
  unsigned __int64 v14; // rcx
  __int64 v15; // rdi
  __int64 v16; // rsi
  unsigned __int64 v17; // rdx
  __int64 v18; // rdx
  char v19; // [rsp+0h] [rbp-38h] BYREF
  _DWORD *v20; // [rsp+10h] [rbp-28h]
  int v21; // [rsp+1Ch] [rbp-1Ch]
  __int64 v22; // [rsp+20h] [rbp-18h]
  __int64 v23; // [rsp+28h] [rbp-10h]
  unsigned int v24; // [rsp+34h] [rbp-4h]

  if ( (unsigned __int64)&v19 <= *(_QWORD *)(v8 + 8) )
  {
    v24 = a5;
    v23 = a3;
    v9 = MEMORY[0x181EB84E0]();
LABEL_12:
    v24 = a5;
    v23 = a3;
    v13 = *(_QWORD *)(v8 + 40);
    if ( (unsigned __int64)(v13 + 40) > *(_QWORD *)(v8 + 32) )
    {
      v21 = v9;
      v13 = MEMORY[0x181EAA920](a1, a2, a3: v10);
      v9 = v21;
    }
    else
    {
      *(_QWORD *)(v8 + 40) = v13 + 40;
      *(_DWORD *)v13 = 34081944;
      *(_DWORD *)(v13 + 4) = 0;
      *(_QWORD *)(v13 + 8) = 0;
      *(_QWORD *)(v13 + 16) = 0;
      *(_QWORD *)(v13 + 24) = 0;
      *(_QWORD *)(v13 + 32) = 0;
    }
    *(_DWORD *)(v13 + 20) = 46923644;
    *(_DWORD *)(v13 + 16) = v9;
    *(_DWORD *)(v13 + 12) = (unsigned __int64)(v13 - v7) >> 3;
    v20 = (_DWORD *)v13;
    sub_18503B9A0(a1, a2, a3: v13, a4: v10, a5: 0);
    v17 = (unsigned __int64)v20;
    v20[2] = 43885988;
    if ( (*(_DWORD *)v17 & 2) != 0 )
    {
      v14 = (v17 & 0xFFFFFFFFFFF80000LL) + 2112;
      if ( *(_BYTE *)((v17 & 0xFFFFFFFFFFF80000LL) + ((v17 - v14) >> 9) + 0x38) != 0 )
        *(_BYTE *)((v17 & 0xFFFFFFFFFFF80000LL) + ((v17 - v14) >> 9) + 0x38) = 0;
    }
    goto LABEL_15;
  }
  v9 = *(_DWORD *)(v7 + 374343896);
  v10 = 34081944;
  if ( a3 < 0 )
    goto LABEL_12;
  if ( a5 >= 0xF4240 )
  {
    while ( 1 )
    {
      v24 = a5;
      v23 = a3;
      v18 = *(_QWORD *)(v8 + 40);
      if ( (unsigned __int64)(v18 + 40) > *(_QWORD *)(v8 + 32) )
      {
        v21 = v9;
        v18 = MEMORY[0x181EAA920](a1, a2, a3: v10);
        v9 = v21;
      }
      else
      {
        *(_QWORD *)(v8 + 40) = v18 + 40;
        *(_DWORD *)v18 = 34081944;
        *(_DWORD *)(v18 + 4) = 0;
        *(_QWORD *)(v18 + 8) = 0;
        *(_QWORD *)(v18 + 16) = 0;
        *(_QWORD *)(v18 + 24) = 0;
        *(_QWORD *)(v18 + 32) = 0;
      }
      *(_DWORD *)(v18 + 20) = 46923644;
      *(_DWORD *)(v18 + 16) = v9;
      *(_DWORD *)(v18 + 12) = (unsigned __int64)(v18 - v7) >> 3;
      v20 = (_DWORD *)v18;
      sub_18503B9A0(a1, a2, a3: v18, a4: v10, a5: 0);
      v17 = (unsigned __int64)v20;
      v20[2] = 44818882;
      if ( (*(_DWORD *)v17 & 2) != 0 )
      {
        v14 = (v17 & 0xFFFFFFFFFFF80000LL) + 2112;
        if ( *(_BYTE *)((v17 & 0xFFFFFFFFFFF80000LL) + ((v17 - v14) >> 9) + 0x38) != 0 )
          *(_BYTE *)((v17 & 0xFFFFFFFFFFF80000LL) + ((v17 - v14) >> 9) + 0x38) = 0;
      }
LABEL_15:
      v9 = MEMORY[0x182769900](a1: v15, a2: v16, a3: v17, a4: v14, a5: &a7);
    }
  }
  if ( a3 < 0x8637BD05AF7LL )
    v11 = 1000000 * a3;
  else
    v11 = 0x7FFFFFFFFFFFFFFFLL;
  v23 = a3;
  if ( a5 < (unsigned __int64)(0x7FFFFFFFFFFFFFFFLL - v11) )
    JUMPOUT(0x30A04C804LL);
  v24 = a5;
  v22 = 0x7FFFFFFFFFFFFFFFLL;
  result = sub_185031A20(a1, a2, a3: -1, a4: v11, a5, a6, a7: v19);
  if ( *(int *)(v8 + 16) <= 0 )
    return MEMORY[0x18277F280]();
  return result;
}
