// sub_132B53B4
// rva 0x132b53b4  size 165  section .text  group text
// window base 0x1932b53b4: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_132B53B4(__int64 a1, __int64 a2, __int64 *a3, __int64 a4, __int64 a5, __int64 *a6)
{
  __int64 v6; // rax
  __int64 v8; // r8
  __int64 *v9; // rsi
  __int64 v11; // rdi
  int v12; // r8d
  int v13; // r9d

  v6 = *a3;
  v8 = -1;
  v9 = a6;
  v11 = a4;
  if ( *a3 == -1 )
  {
    if ( (unsigned int)__imp_KERNEL32.dll!CreatePipe(a1: a4, a2: a6, a3: a5 + 8, a4: a5, a5: 0, a6: 4120) == 0 )
    {
      sub_132B5824(a1: v11, a2: (_DWORD)v9, a3: 544264, a4: v11, a5: v12, a6: v13);
      return 0;
    }
    v6 = *(_QWORD *)(a5 + 8LL * *(int *)(a5 + 16));
    v8 = *(_QWORD *)((*(_DWORD *)(a5 + 16) == 0 ? 8 : 0) + a5);
  }
  *v9 = v6;
  *a3 = v8;
  __imp_KERNEL32.dll!SetHandleInformation(a1: v11, a2: v9, a3: 1, a4: *v9);
  return 1;
}
