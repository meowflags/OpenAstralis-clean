// sub_18274F480
// rva 0x0274f480  size 267  section .text  group text
// window base 0x18274f480: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_18274F480(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        _DWORD *a5,
        void (__fastcall *a6)(__int64, __int64, __int64, __int64, _DWORD *, _DWORD *))
{
  __int64 v6; // rbx
  _DWORD *v7; // r14
  __int64 v8; // r15
  __int64 v10; // rcx
  __int64 v11; // r9
  __int64 v12; // rcx
  __int64 v13; // rdi
  __int64 v14; // rsi
  __int64 v15; // xmm0_8
  __int64 result; // rax
  __int64 v17; // rdx
  __int64 v18; // [rsp+0h] [rbp-18h] BYREF
  __int64 v19; // [rsp+10h] [rbp-8h]

  if ( (unsigned __int64)&v18 <= *(_QWORD *)(v8 + 8) )
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
    return sub_18274F5A0();
  }
  else
  {
    if ( a5 != v7 && a5[2] == 2 )
    {
      v6 = (unsigned int)a5[3];
      if ( (_DWORD)v6 == 0 )
        goto LABEL_7;
      v10 = v7[2 * v6] >> 3;
      if ( SHIWORD(v7[2 * v10 + 15]) >= 5 )
      {
        a4 = (unsigned int)v7[2 * v10 + 4];
        if ( v7[2 * a4 + 7] == 93799 )
          goto LABEL_7;
      }
    }
    do
    {
      a6 = (void (__fastcall *)(__int64, __int64, __int64, __int64, _DWORD *, _DWORD *))sub_182756FC0();
LABEL_7:
      v11 = (unsigned int)a5[4];
      if ( (_DWORD)v11 == 0 )
        break;
      v12 = v7[2 * v11] >> 3;
      a2 = (unsigned int)v7[2 * v12 + 11];
      a1 = (unsigned int)a2 & (0xDADu >> HIBYTE(v7[2 * v12 + 11]));
      a4 = (unsigned __int16)v7[2 * (unsigned int)v7[2 * v12 + 5] + 3 + a1];
    }
    while ( (_DWORD)a4 != 3501 );
    a6(a1, a2, a3, a4, a5: &v7[2 * v6], a6: &v7[2 * v11]);
    result = *(_QWORD *)(v8 + 40);
    v17 = result + 16;
    if ( (unsigned __int64)(result + 16) > *(_QWORD *)(v8 + 32) )
    {
      v19 = v15;
      result = MEMORY[0x181EAA920](a1: v13, a2: v14, a3: 34086648);
      v15 = v19;
    }
    else
    {
      *(_QWORD *)(v8 + 40) = v17;
      *(_DWORD *)result = 34086648;
      *(_DWORD *)(result + 4) = 0;
      *(_QWORD *)(result + 8) = 0;
    }
    *(_QWORD *)(result + 8) = v15;
    if ( *(int *)(v8 + 16) <= 0 )
      return sub_18277F280(a1: v13, a2: v14, a3: v17);
  }
  return result;
}
