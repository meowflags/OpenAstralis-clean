// sub_181E64BE0
// rva 0x01e64be0  size 316  section .text  group text
// window base 0x181e64be0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_181E64BE0(
        __int64 a1,
        __int64 a2,
        int a3,
        __int64 a4,
        _DWORD *a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        int a10)
{
  _DWORD *v10; // r14
  __int64 v11; // r15
  __int64 v12; // rcx
  __int64 v14; // rdx
  __int64 v15; // rdi
  __int64 v16; // rsi
  __int64 v17; // [rsp+0h] [rbp-28h] BYREF
  __int64 v18; // [rsp+8h] [rbp-20h]
  __int64 v19; // [rsp+10h] [rbp-18h]
  _DWORD *v20; // [rsp+18h] [rbp-10h]
  int v21; // [rsp+24h] [rbp-4h]

  if ( (unsigned __int64)&v17 <= *(_QWORD *)(v11 + 8) )
  {
    MEMORY[0x181EB84E0]();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    return sub_181E64D20(a1: v15, a2: v16, a3: v14);
  }
  else
  {
    v20 = a5;
    if ( a5 != v10
      && (_DWORD)(v12 = (unsigned __int16)v10[2 * v10[2 * (*a5 >> 3) + 5]
                                            + 3
                                            + (v10[2 * (*a5 >> 3) + 11] & (0x1839u >> HIBYTE(v10[2 * (*a5 >> 3) + 11])))]) == 6201 )
    {
      if ( a3 != 0 )
      {
        v19 = a1;
        v18 = a6;
        v21 = a3;
        if ( (_DWORD *)MEMORY[0x1828C1EE0](a1, a2, a3: a5, a4: v12, a5: v10 + 10113226) == v10 )
          JUMPOUT(0x181E64CEFLL);
        if ( *(int *)(v11 + 16) <= 0 )
          MEMORY[0x18277F280]();
        return (__int64)(v10 + 94162812);
      }
      else
      {
        return sub_181E64C96(a1, a2, a3: 0, a4: 6201, (_DWORD)a5, a6, a7, a8, a9, a10);
      }
    }
    else
    {
      v19 = a1;
      v18 = a6;
      v21 = a3;
      if ( *(int *)(v11 + 16) <= 0 )
        JUMPOUT(0x181E64CF6LL);
      return (__int64)(v10 + 94162802);
    }
  }
}
