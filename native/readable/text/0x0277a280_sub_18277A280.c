// sub_277A280
// rva 0x0277a280  size 208  section .text  group text
// window base 0x18277a280: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_277A280(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, int a6)
{
  __int64 v6; // r14
  __int64 result; // rax
  __int64 v8; // rcx
  __int64 v9; // rdi
  __int64 v10; // rsi
  int v11; // r8d
  int v12; // r9d
  __int64 v13; // rcx
  int v14; // edx
  char v15; // [rsp+0h] [rbp-28h]
  unsigned int v16; // [rsp+14h] [rbp-14h]
  int v17; // [rsp+20h] [rbp-8h]

  result = *(unsigned int *)(a3 + 72);
  if ( (_DWORD)result != 0 )
  {
    v8 = *(unsigned int *)(v6 + 8 * result + 64);
    if ( (_DWORD)v8 == 0 )
    {
      sub_276EFE0(a1, a2, a3, a4: 0, a5, a6, a7: v15);
      goto LABEL_13;
    }
    v16 = *(_DWORD *)(a3 + 72);
    v17 = a3;
    sub_277FEA0(a1, a2, a3: v6 + 8 * v8);
    result = v16;
    *(_QWORD *)(v6 + 8LL * v16 + 56) = 0;
    v13 = *(_DWORD *)(v6 + 8LL * v16) >> 3;
    if ( *(__int16 *)(v6 + 8 * v13 + 62) < 3
      || (v13 = *(unsigned int *)(v6 + 8 * v13 + 16), *(_DWORD *)(v6 + 8 * v13 + 20) != 70129) )
    {
      v14 = v17;
      result = *(unsigned int *)(v6 + 8LL * v16 + 12);
      if ( (_DWORD)result != 0 )
      {
        if ( *(_BYTE *)(v6 + 8 * result + 32) == 0 )
          return (unsigned int)__sync_fetch_and_add((volatile signed __int32 *)(v6 + 376668436), 0xFFFFFFFF);
        return result;
      }
LABEL_13:
      sub_276EFE0(a1: v9, a2: v10, a3: v14, a4: v13, a5: v11, a6: v12, a7: v15);
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
      return sub_277A360();
    }
  }
  else if ( *(_BYTE *)(a3 + 248) == 0 )
  {
    return (unsigned int)__sync_fetch_and_add((volatile signed __int32 *)(v6 + 376668436), 0xFFFFFFFF);
  }
  return result;
}
