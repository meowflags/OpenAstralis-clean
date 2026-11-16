// sub_181EB46C0
// rva 0x01eb46c0  size 643  section .text  group text
// window base 0x181eb46c0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_181EB46C0(__int64 a1, __int64 a2, int a3, __int64 a4, __int64 a5, __int64 a6, char a7)
{
  __int64 v7; // r14
  __int64 v8; // r15
  __int64 v9; // rbx
  __int64 v10; // rcx
  unsigned __int64 v11; // rbp
  __int64 v12; // rsi
  unsigned __int64 i; // rax
  __int64 result; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rdi
  __int64 v18; // rsi
  char v19; // [rsp+0h] [rbp-28h] BYREF
  __int64 v20; // [rsp+8h] [rbp-20h]
  __int64 v21; // [rsp+10h] [rbp-18h]
  __int64 v22; // [rsp+18h] [rbp-10h]
  int v23; // [rsp+24h] [rbp-4h]

  v22 = a6;
  if ( (unsigned __int64)&v19 <= *(_QWORD *)(v8 + 8) )
  {
    v21 = a5;
    v23 = a3;
    sub_181EB84E0(a1, a2, a3, a4, a5, a6, a7: v19);
  }
  else if ( a6 != v7 )
  {
    v9 = *(_QWORD *)(v8 + 40);
    v10 = *(unsigned int *)(a5 + 8);
    v11 = (4 * v10 + 19) & 0x7FFFFFFF8LL;
    v12 = 40466320;
    if ( v11 >= 0x20000 || (a1 = v9 + v11, v9 + v11 > *(_QWORD *)(v8 + 32)) )
    {
      v21 = a5;
      v23 = a3;
      v9 = sub_181EAA840(a1, a2: 40466320, a3: 40466320, a4: v10, a5: v10);
      a6 = v22;
      a5 = v21;
      a3 = v23;
    }
    else
    {
      *(_QWORD *)(v8 + 40) = a1;
      *(_QWORD *)v9 = 40466320;
      *(_DWORD *)(v9 + 8) = v10;
      *(_DWORD *)(v9 + 12) = 0;
      if ( v11 - 16 >= 0x800 )
      {
        v21 = a5;
        v23 = a3;
        memset((void *)(v9 + 16), 0, v11 - 16);
        a1 = v9 + v11;
      }
      else
      {
        for ( i = 16; v11 > i; i += 8LL )
          *(_QWORD *)(v9 + i) = 0;
      }
    }
    result = *(_QWORD *)(v8 + 40);
    if ( (unsigned __int64)(result + 32) > *(_QWORD *)(v8 + 32) )
    {
      v20 = v9;
      v21 = a5;
      v23 = a3;
      result = sub_181EAA920(a1, a2: v12, a3: 40466208);
      v9 = v20;
      a6 = v22;
      a5 = v21;
      a3 = v23;
    }
    else
    {
      *(_QWORD *)(v8 + 40) = result + 32;
      *(_DWORD *)result = 40466208;
      *(_DWORD *)(result + 4) = 0;
      *(_QWORD *)(result + 8) = 0;
      *(_QWORD *)(result + 16) = 0;
      *(_QWORD *)(result + 24) = 0;
    }
    *(_BYTE *)(result + 22) = 1;
    *(_BYTE *)(result + 21) = 1;
    *(_BYTE *)(result + 20) = MEMORY[0x11AF8788] & a3;
    *(_DWORD *)(result + 16) = (unsigned __int64)(v9 - v7) >> 3;
    *(_DWORD *)(result + 12) = (unsigned __int64)(a6 - v7) >> 3;
    *(_DWORD *)(result + 8) = (unsigned __int64)(a5 - v7) >> 3;
    *(_DWORD *)(result + 4) = 47082185;
    if ( *(int *)(v8 + 16) <= 0 )
    {
      v21 = a5;
      v23 = a3;
      return MEMORY[0x18277F280](a1, a2: v12);
    }
    return result;
  }
  v21 = a5;
  v23 = a3;
  v15 = *(_QWORD *)(v8 + 40);
  if ( (unsigned __int64)(v15 + 48) > *(_QWORD *)(v8 + 32) )
    goto LABEL_21;
  *(_QWORD *)(v8 + 40) = v15 + 48;
  *(_DWORD *)v15 = 34101256;
  *(_DWORD *)(v15 + 4) = 0;
  *(_QWORD *)(v15 + 8) = 0;
  *(_QWORD *)(v15 + 16) = 0;
  *(_QWORD *)(v15 + 24) = 0;
  *(_QWORD *)(v15 + 32) = 0;
  *(_QWORD *)(v15 + 40) = 0;
  while ( 1 )
  {
    *(_DWORD *)(v15 + 20) = 46923644;
    *(_DWORD *)(v15 + 16) = *(_DWORD *)(v7 + 374343896);
    *(_DWORD *)(v15 + 12) = (unsigned __int64)(v15 - v7) >> 3;
    v20 = v15;
    MEMORY[0x18503B9A0](a1, a2, a3: v15, a4, a5: 0);
    MEMORY[0x182769900](a1: v17, a2: v18, a3: v20, a4: v16, a5: &a7);
LABEL_21:
    v15 = sub_181EAA920(a1, a2, a3: 34101256);
  }
}
