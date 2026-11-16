// sub_1850449A0
// rva 0x050449a0  size 277  section .text  group text
// window base 0x1850449a0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1850449A0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, _DWORD *a5, __int64 a6, char a7)
{
  __int64 v7; // r13
  _DWORD *v8; // r14
  __int64 v9; // r15
  _DWORD *v10; // rax
  __int64 v11; // rax
  __int64 v12; // rdi
  __int64 v13; // rsi
  __int64 (__fastcall *v14)(__int64, __int64, _DWORD *, _QWORD, __int64); // rcx
  __int64 result; // rax
  _DWORD *v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rdi
  __int64 v19; // rsi
  __int64 v20; // r8
  __int16 v21; // dx
  __int64 v22; // rdx
  __int64 v23; // r8
  __int16 v24; // dx
  char v25; // [rsp+0h] [rbp-28h] BYREF
  _DWORD *v26; // [rsp+10h] [rbp-18h]
  __int64 v27; // [rsp+18h] [rbp-10h]
  _DWORD *v28; // [rsp+20h] [rbp-8h]

  v28 = a5;
  if ( (unsigned __int64)&v25 <= *(_QWORD *)(v9 + 8) )
  {
    v27 = a3;
    MEMORY[0x181EB84E0]();
  }
  else
  {
    v10 = &v8[2 * *(unsigned int *)(a3 + 108)];
    v27 = a3;
    v11 = MEMORY[0x185A4CE80](a1, a2, a3: v10);
    if ( v28 != v8 )
    {
      v14 = (__int64 (__fastcall *)(__int64, __int64, _DWORD *, _QWORD, __int64))(v7
                                                                                + *(_QWORD *)&v8[2 * (*v28 >> 3) + 62]);
      result = v14(a1: v12, a2: v13, a3: v28, a4: v14, a5: v11);
      goto LABEL_4;
    }
  }
  v16 = (_DWORD *)MEMORY[0x18276BEE0]();
  v22 = *v16 >> 3;
  v23 = (unsigned int)v8[2 * v22 + 4];
  v24 = HIWORD(v8[2 * v22 + 15]);
  if ( v24 >= 5 && v8[2 * v23 + 7] == 88185 || v24 < 5 || v8[2 * v23 + 7] != 88029 )
  {
    do
    {
      do
        v16 = (_DWORD *)MEMORY[0x182769900](a1: v18, a2: v19, a3: v16, a4: v17, a5: &a7);
      while ( v21 < 5 );
    }
    while ( v8[2 * v20 + 7] != 88029 );
  }
  v26 = v16;
  result = sub_185047200(a1: v18, a2: v19, a3: v27, a4: v17, a5: (_DWORD)v28, a6: 1, a7: v25);
LABEL_4:
  if ( *(int *)(v9 + 16) <= 0 )
    return MEMORY[0x18277F280]();
  return result;
}
