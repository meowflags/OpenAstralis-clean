// sub_132B9564
// rva 0x132b9564  size 372  section .text  group text
// window base 0x1932b9564: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_132B9564(
        _DWORD a1,
        _BYTE *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        int a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        int a11)
{
  signed __int64 v11; // rax
  void *v12; // rsp
  __int64 v13; // rdi
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  int v21; // eax
  _BYTE *v22; // rsi
  __int64 v23; // rax
  __int64 v24; // rdi
  __int64 v25; // rsi
  __int64 v26; // r9
  int v27; // eax
  __int64 v28; // rcx
  unsigned int v30[8]; // [rsp+0h] [rbp-2078h] BYREF
  _BYTE *v31; // [rsp+20h] [rbp-2058h]
  _BYTE v32[8192]; // [rsp+30h] [rbp-2048h] BYREF
  unsigned __int64 v33; // [rsp+2030h] [rbp-48h]

  v12 = alloca(v11);
  v33 = (unsigned __int64)v30 ^ __imp_api-ms-win-crt-heap-l1-1-0.dll!malloc;
  LODWORD(v13) = a11;
  if ( a5 == 0 )
  {
    JNU_ThrowNullPointerException(a1: a11, a2, a3: 0, a4);
    return sub_132C8DE0(a1: v13, a2, a3: v18, a4: (unsigned __int64)v30 ^ v33, a5: v19, a6: v20);
  }
  if ( a6 < 0
    || a11 < 0
    || (v21 = (*(__int64 (__fastcall **)(_QWORD, _BYTE *, __int64))(*(_QWORD *)a4 + 1368LL))(a1: a11, a2, a3: a5)) - a6 < (int)v13 )
  {
    JNU_ThrowByName(a1: v13, (_DWORD)a2, a3: 545176, a4, a5: 0);
    return sub_132C8DE0(a1: v13, a2, a3: v18, a4: (unsigned __int64)v30 ^ v33, a5: v19, a6: v20);
  }
  if ( (_DWORD)v13 != 0 )
  {
    if ( (int)v13 <= 0x2000 )
    {
      v22 = v32;
    }
    else
    {
      v22 = (_BYTE *)__imp_api-ms-win-crt-heap-l1-1-0.dll!free(a1: v13, a2, a3: v18, a4: v13);
      if ( v22 == nullptr )
      {
        JNU_ThrowOutOfMemoryError(a1: v13, a2: 0, a3: 0, a4);
        return sub_132C8DE0(a1: v13, a2, a3: v18, a4: (unsigned __int64)v30 ^ v33, a5: v19, a6: v20);
      }
    }
    v23 = sub_132B8E78(a1: v13, a2: (__int64)v22, a3, a4);
    if ( v23 == -1 )
    {
      JNU_ThrowIOException(a1: v24, a2: v25, a3: 543576, a4);
LABEL_13:
      v13 = 0xFFFFFFFFLL;
      goto LABEL_14;
    }
    v27 = handleRead(a1: v24, a2: v25, a3: v25, a4: v23, a5: (unsigned int)v24, a6: v26, a7: v30[0]);
    if ( v27 <= 0 )
    {
      if ( v27 != -1 )
        goto LABEL_13;
      JNU_ThrowIOExceptionWithLastError(a1: 0xFFFFFFFFLL, a2, a3: 545160, a4);
    }
    else
    {
      v28 = *(_QWORD *)a4;
      v31 = a2;
      (*(void (__fastcall **)(_QWORD, _BYTE *, __int64, __int64, _QWORD, _QWORD))(v28 + 1664))(
        a1: (unsigned int)v27,
        a2,
        a3: a5,
        a4,
        a5: (unsigned int)a6,
        a6: (unsigned int)v27);
    }
LABEL_14:
    if ( a2 != v32 )
      MEMORY[0x79ae0]/* 0x79ae0 */(a1: v13, a2, a3: v18, a4: a2);
  }
  return sub_132C8DE0(a1: v13, a2, a3: v18, a4: (unsigned __int64)v30 ^ v33, a5: v19, a6: v20);
}
