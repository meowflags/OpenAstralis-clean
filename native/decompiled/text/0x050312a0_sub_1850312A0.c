// sub_1850312A0
// rva 0x050312a0  size 300  section .text  group text
// window base 0x1850312a0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1850312A0(__int64 a1, __int64 a2, _DWORD *a3, __int64 a4, int a5, __int64 a6, char a7)
{
  __int64 v7; // r13
  __int64 v8; // r14
  __int64 v9; // r15
  __int64 result; // rax
  __int64 (*v11)(void); // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rdi
  __int64 v15; // rsi
  __int64 v16; // [rsp+0h] [rbp-28h] BYREF
  __int64 v17; // [rsp+10h] [rbp-18h]
  _DWORD *v18; // [rsp+18h] [rbp-10h]
  int v19; // [rsp+24h] [rbp-4h]

  if ( (unsigned __int64)&v16 <= *(_QWORD *)(v9 + 8) )
  {
    v19 = a5;
    v18 = a3;
    MEMORY[0x181EB84E0]();
  }
  else if ( (unsigned int)(a5 - 1) < 0xA )
  {
    result = *a3 >> 3;
    if ( *(__int16 *)(v8 + 8 * result + 62) >= 3
      && *(_DWORD *)(v8 + 8LL * *(unsigned int *)(v8 + 8 * result + 16) + 20) == 70129 )
    {
      v19 = a5;
      v18 = a3;
    }
    else
    {
      v11 = (__int64 (*)(void))(v7 + *(_QWORD *)(v8 + 8 * result + 280));
      v18 = a3;
      v19 = a5;
      result = v11();
    }
    if ( *(int *)(v9 + 16) <= 0 )
      return MEMORY[0x18277F280]();
    return result;
  }
  v19 = a5;
  v18 = a3;
  v12 = *(_QWORD *)(v9 + 40);
  if ( (unsigned __int64)(v12 + 40) > *(_QWORD *)(v9 + 32) )
    goto LABEL_14;
  *(_QWORD *)(v9 + 40) = v12 + 40;
  *(_DWORD *)v12 = 34081944;
  *(_DWORD *)(v12 + 4) = 0;
  *(_QWORD *)(v12 + 8) = 0;
  *(_QWORD *)(v12 + 16) = 0;
  *(_QWORD *)(v12 + 24) = 0;
  *(_QWORD *)(v12 + 32) = 0;
  while ( 1 )
  {
    *(_DWORD *)(v12 + 20) = 46923644;
    *(_DWORD *)(v12 + 16) = *(_DWORD *)(v8 + 374343896);
    *(_DWORD *)(v12 + 12) = (unsigned __int64)(v12 - v8) >> 3;
    v17 = v12;
    sub_18503B9A0(a1, a2, a3: v12, a4, a5: 0);
    MEMORY[0x182769900](a1: v14, a2: v15, a3: v17, a4: v13, a5: &a7);
LABEL_14:
    v12 = MEMORY[0x181EAA920](a1, a2, a3: 34081944);
  }
}
