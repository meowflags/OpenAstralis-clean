// sub_1827566A0
// rva 0x027566a0  size 245  section .text  group text
// window base 0x1827566a0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
_DWORD *__fastcall sub_1827566A0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        _DWORD *a5,
        __int64 (__fastcall *a6)(__int64, __int64, _DWORD *, _DWORD *, _DWORD *, _DWORD *),
        char a7)
{
  _DWORD *v7; // r14
  __int64 v8; // r15
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rdx
  __int64 v13; // rbx
  __int64 v14; // rbx
  __int64 v15; // rbp
  int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rdi
  __int64 v19; // rsi
  int v21; // edx
  int v22; // ecx
  int v23; // edi
  int v24; // esi
  int v25; // r8d
  int v26; // r9d
  __int64 v27; // [rsp+0h] [rbp-8h] BYREF

  if ( (unsigned __int64)&v27 <= *(_QWORD *)(v8 + 8) )
  {
    MEMORY[0x181EB84E0]();
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
    sub_1827567A0(a1: v23, a2: v24, a3: v21, a4: v22, a5: v25, a6: v26, a7);
  }
  if ( a5 != v7 && a5[2] == 3 )
  {
    v10 = (unsigned int)a5[3];
    if ( (_DWORD)v10 == 0 )
      goto LABEL_7;
    v11 = v7[2 * v10] >> 3;
    if ( SHIWORD(v7[2 * v11 + 15]) >= 7 && v7[2 * v7[2 * v11 + 4] + 9] == 95976 )
      goto LABEL_7;
  }
  while ( 1 )
  {
    a6 = (__int64 (__fastcall *)(__int64, __int64, _DWORD *, _DWORD *, _DWORD *, _DWORD *))sub_182757000(a1, a2, a3: a5);
LABEL_7:
    v12 = (unsigned int)a5[4];
    if ( (_DWORD)v12 != 0 )
    {
      v13 = v7[2 * v12] >> 3;
      if ( SHIWORD(v7[2 * v13 + 15]) < 3 || v7[2 * v7[2 * v13 + 4] + 5] != 82938 )
        continue;
    }
    v14 = (unsigned int)a5[5];
    if ( (_DWORD)v14 == 0 )
      break;
    v15 = v7[2 * v14] >> 3;
    if ( SHIWORD(v7[2 * v15 + 15]) >= 3 && v7[2 * v7[2 * v15 + 4] + 5] == 96283 )
      break;
  }
  v16 = a6(a1, a2, a3: &v7[2 * v10], a4: &v7[2 * v10], a5: &v7[2 * v12], a6: &v7[2 * v14]);
  if ( *(int *)(v8 + 16) <= 0 )
    v16 = sub_18277F280(a1: v18, a2: v19, a3: v17);
  if ( v16 != 0 )
    JUMPOUT(0x304E9F760LL);
  return v7 + 8781820;
}
