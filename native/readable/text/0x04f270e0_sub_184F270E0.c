// sub_4F270E0
// rva 0x04f270e0  size 406  section .text  group text
// window base 0x184f270e0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_4F270E0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, char a7)
{
  __int64 v7; // r13
  __int64 v8; // r14
  __int64 v9; // r15
  __int64 result; // rax
  int v11; // ecx
  int v12; // edi
  int v13; // esi
  int v14; // r8d
  int v15; // r9d
  int v16; // ecx
  int v17; // edi
  int v18; // esi
  int v19; // r8d
  int v20; // r9d
  __int64 v21; // rcx
  char v22; // [rsp+0h] [rbp-38h] BYREF
  __int64 v23; // [rsp+18h] [rbp-20h]
  __int64 i; // [rsp+20h] [rbp-18h]
  __int64 v25; // [rsp+28h] [rbp-10h]
  __int64 v26; // [rsp+30h] [rbp-8h]

  if ( (unsigned __int64)&v22 <= *(_QWORD *)(v9 + 8) )
  {
    sub_1EB84E0();
    goto LABEL_14;
  }
  v25 = a3;
  result = *(unsigned int *)(a3 + 8);
  if ( (_DWORD)result == 0 )
  {
    v21 = v8;
    goto LABEL_8;
  }
  ((void (__fastcall *)(__int64, __int64, __int64))(v7
                                                  + *(_QWORD *)(v8 + 8LL * (*(_DWORD *)(v8 + 8 * result) >> 3) + 120)))(
    a1,
    a2,
    a3: v8 + 8 * result);
  for ( i = v8; ; i = sub_2769900(a1, a2, a3: v21, a4: v21, a5: &a7) )
  {
    sub_4F272E0(a1: v12, a2: v13, a3: v25, a4: v11, a5: v14, a6: v15, a7: v22);
    while ( 1 )
    {
      v26 = v7;
      v23 = i;
      result = *(unsigned int *)(v25 + 8);
      if ( (_DWORD)result == 0 )
        break;
      ((void (__fastcall *)(__int64, __int64, __int64))(v7
                                                      + *(_QWORD *)(v8 + 8LL * (*(_DWORD *)(v8 + 8 * result) >> 3) + 120)))(
        a1,
        a2,
        a3: v8 + 8 * result);
      v26 = v7;
      i = v23;
      sub_4F272E0(a1: v17, a2: v18, a3: v25, a4: v16, a5: v19, a6: v20, a7: v22);
    }
    v21 = v23;
LABEL_8:
    if ( v21 == v8 )
      break;
LABEL_14:
    ;
  }
  if ( *(int *)(v9 + 16) <= 0 )
    return sub_277F280();
  return result;
}
