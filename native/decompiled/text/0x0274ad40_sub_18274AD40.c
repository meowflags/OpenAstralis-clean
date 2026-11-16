// sub_18274AD40
// rva 0x0274ad40  size 363  section .text  group text
// window base 0x18274ad40: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_18274AD40(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        _DWORD *a5,
        __int64 (__fastcall *a6)(_DWORD *, _DWORD *, __int64, _DWORD *, _DWORD *, _DWORD *))
{
  __int64 v6; // rbx
  _DWORD *v7; // r14
  __int64 v8; // r15
  __int64 v10; // rcx
  __int64 v11; // rbp
  __int64 v12; // rcx
  __int64 v13; // rsi
  __int64 v14; // rcx
  __int64 v15; // r9
  __int64 v16; // rdi
  __int64 v17; // rcx
  __int64 result; // rax
  __int64 v19; // rdx
  __int64 v20; // rdi
  __int64 v21; // rsi
  __int64 v22; // [rsp+0h] [rbp-8h] BYREF

  if ( (unsigned __int64)&v22 <= *(_QWORD *)(v8 + 8) )
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
    return sub_18274AEC0();
  }
  else
  {
    if ( a5 != v7 && a5[2] == 5 )
    {
      v6 = (unsigned int)a5[3];
      if ( (_DWORD)v6 == 0 )
        goto LABEL_7;
      v10 = v7[2 * v6] >> 3;
      if ( SHIWORD(v7[2 * v10 + 15]) >= 2 && v7[2 * v7[2 * v10 + 4] + 4] == 73309 )
        goto LABEL_7;
    }
    while ( 1 )
    {
      a6 = (__int64 (__fastcall *)(_DWORD *, _DWORD *, __int64, _DWORD *, _DWORD *, _DWORD *))sub_182756FC0();
LABEL_7:
      v11 = (unsigned int)a5[4];
      if ( (_DWORD)v11 != 0 )
      {
        v12 = v7[2 * v11] >> 3;
        if ( SHIWORD(v7[2 * v12 + 15]) < 3 || v7[2 * v7[2 * v12 + 4] + 5] != 96283 )
          continue;
      }
      v13 = (unsigned int)a5[5];
      if ( (_DWORD)v13 != 0 )
      {
        v14 = v7[2 * v13] >> 3;
        if ( SHIWORD(v7[2 * v14 + 15]) < 3 || v7[2 * v7[2 * v14 + 4] + 5] != 96283 )
          continue;
      }
      v15 = (unsigned int)a5[6];
      if ( (_DWORD)v15 == 0 || v7[2 * v15] >> 3 == 4941304 )
      {
        v16 = (unsigned int)a5[7];
        if ( (_DWORD)v16 == 0 )
          break;
        v17 = v7[2 * v16] >> 3;
        if ( (unsigned __int16)v7[2 * v7[2 * v17 + 5] + 3 + (v7[2 * v17 + 11] & (0x136u >> HIBYTE(v7[2 * v17 + 11])))] == 310 )
          break;
      }
    }
    result = a6(a1: &v7[2 * v13], a2: &v7[2 * v15], a3, a4: &v7[2 * v16], a5: &v7[2 * v6], a6: &v7[2 * v11]);
    if ( *(int *)(v8 + 16) <= 0 )
      return sub_18277F280(a1: v20, a2: v21, a3: v19);
  }
  return result;
}
