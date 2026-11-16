// sub_132B8F0C
// rva 0x132b8f0c  size 226  section .text  group text
// window base 0x1932b8f0c: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_132B8F0C(
        _DWORD a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        _DWORD a5,
        _DWORD a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10)
{
  __int64 v10; // rbx
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rdi
  __int64 v14; // rsi
  __int64 v15; // rdi
  __int64 v16; // rsi
  _QWORD *v17; // rsi
  __int64 v19; // rax
  __int64 v20; // rdi
  _QWORD *v21; // rsi
  int v22; // r8d
  int v23; // r9d
  unsigned int v24; // ebx

  a8 = v10;
  a10 = a2;
  v11 = __imp_KERNEL32.dll!GetFileType(a1: a4, a2: a3, a3, a4);
  if ( (unsigned int)(v11 - 2) <= 1 )
  {
    v19 = __imp_KERNEL32.dll!SetFilePointerEx(a1: v13, a2: v14, a3: v12, a4: 4294967286LL);
    if ( v19 == v20 )
    {
      v24 = sub_132B90DC(a1: v20, a2: (_DWORD)v21, a3: (unsigned int)&a7, a4: v20, a5: v22, a6: v23);
    }
    else
    {
      v24 = 0;
      if ( v20 != -1 )
      {
        if ( (unsigned int)__imp_KERNEL32.dll!GetFileSizeEx(a1: v20, a2: v21, a3: 0, a4: v20, a5: 0, a6: 0) == 0 )
          LODWORD(a7) = 0;
        v24 = 1;
      }
    }
    *v21 = (int)a7;
    return v24;
  }
  else if ( v11 == 1
         && (unsigned int)__imp_KERNEL32.dll!GetStdHandle(a1: v13, a2: v14, a3: 0, a4: v13, a5: &a7) != 0
         && a7 >= 0
         && (unsigned int)__imp_KERNEL32.dll!PeekNamedPipe(a1: v15, a2: v16, a3: &a9, a4: v15) != 0 )
  {
    *v17 = a9 - a7;
    return 1;
  }
  else
  {
    return 0;
  }
}
