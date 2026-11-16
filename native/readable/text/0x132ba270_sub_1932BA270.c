// sub_132BA270
// rva 0x132ba270  size 530  section .text  group text
// window base 0x1932ba270: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_132BA270(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  __int64 v5; // rax
  __int64 v6; // rdx
  unsigned __int64 v7; // rsi
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rdi
  __int64 v11; // rsi
  __int64 v12; // rbx
  __int64 v13; // rdi
  __int64 v14; // rsi
  _WORD *v15; // rdi
  __int64 v16; // rsi
  __int64 v17; // rdx
  int v18; // ebx
  int v19; // ebx
  int v20; // ebx
  int v21; // ebx
  int v22; // ebx
  int v23; // ebx
  int v24; // ebx
  __int64 v25; // rdx
  __int64 v26; // rdi
  __int64 v27; // rsi
  __int64 v28; // rdx
  __int64 v29; // rbx
  __int64 v30; // rdx
  __int64 v31; // rdi
  __int64 v32; // rsi
  __int64 v33; // rax
  __int64 v34; // rdi
  __int64 v35; // rsi
  __int64 v36; // rax
  _QWORD v38[5]; // [rsp+0h] [rbp-168h] BYREF
  int v39; // [rsp+28h] [rbp-140h]
  __int16 v40[2]; // [rsp+30h] [rbp-138h] BYREF
  __int16 v41; // [rsp+34h] [rbp-134h] BYREF
  _BYTE v42[272]; // [rsp+40h] [rbp-128h] BYREF
  __int64 v43; // [rsp+150h] [rbp-18h]

  v5 = __imp_api-ms-win-crt-heap-l1-1-0.dll!malloc(a1, a2, a3, a4: 16);
  v10 = v5;
  if ( v5 == 0 )
    return sub_132C8DE0(a1: v10, a2: v7, a3: v6, a4: (unsigned __int64)v38 ^ v43, a5: v8, a6: v9);
  v11 = v5 + 2;
  if ( a4 != 0 )
  {
    if ( (unsigned int)__imp_KERNEL32.dll!GetACP(a1: v5, a2: v11, a3: 4100, a4, a5: v5 + 2, a6: 14) == 0 )
    {
LABEL_19:
      v25 = 542916;
      goto LABEL_20;
    }
    LODWORD(v12) = __imp_api-ms-win-crt-convert-l1-1-0.dll!_itoa_s(a1: v15, a2: v16, a3: v17, a4: v16);
  }
  else
  {
    v12 = (unsigned int)__imp_KERNEL32.dll!GetLocaleInfoA(a1: v5, a2: v11);
    __imp_api-ms-win-crt-convert-l1-1-0.dll!atoi(a1: v13, a2: v14, a3: v14, a4: v12, a5: 14);
  }
  if ( (_DWORD)v12 == 0 )
    goto LABEL_19;
  v18 = v12 - 874;
  if ( v18 != 0 )
  {
    v19 = v18 - 58;
    if ( v19 != 0 )
    {
      v20 = v19 - 4;
      if ( v20 == 0 )
      {
        v25 = 545356;
        goto LABEL_20;
      }
      v21 = v20 - 13;
      if ( v21 != 0 )
      {
        v22 = v21 - 1;
        if ( v22 != 0 )
        {
          v23 = v22 - 411;
          if ( v23 != 0 )
          {
            v24 = v23 - 53575;
            if ( v24 != 0 )
            {
              if ( v24 != 10065 )
              {
                *v15 = 28739;
                goto LABEL_21;
              }
              goto LABEL_19;
            }
            v25 = 545360;
LABEL_20:
            sub_1932CA27B(a1: v15, a2: v16, a3: v25, a4: v15);
LABEL_21:
            if ( (unsigned int)sub_1932CA1F7(a1: v15, a2: v16, a3: 545368, a4: v15) != 0 )
            {
              if ( (unsigned int)sub_1932CA1F7(a1: v26, a2: v27, a3: 545356, a4: v26) == 0
                && (unsigned int)__imp_KERNEL32.dll!MultiByteToWideChar(a1: v10, a2: v7, a3: v6, a4: 54936) != 0
                && (unsigned int)__imp_KERNEL32.dll!IsValidCodePage(a1: v10, a2: 261, a3: 261, a4: v42) != 0 )
              {
                v29 = sub_1932CA1FD(a1: v10, a2: v7, a3: v6, a4: 545392);
                v33 = sub_1932CA1FD(a1: v31, a2: v32, a3: v30, a4: v42);
                if ( v33 + v29 < v7 )
                {
                  sub_1932CA281(a1: v10, a2: v7, a3: 545392, a4: v42);
                  v36 = __imp_KERNEL32.dll!GetWindowsDirectoryA(a1: v34, a2: v35, a3: 545416, a4: v42);
                  if ( v36 != 0 )
                  {
                    __imp_api-ms-win-crt-stdio-l1-1-0.dll!fopen(a1: v10, a2: v7, a3: v6, a4: v36);
                    v28 = 545360;
                    goto LABEL_30;
                  }
                }
              }
            }
            else
            {
              v39 = 1;
              v38[4] = &v41;
              v40[0] = 16890;
              __imp_api-ms-win-crt-stdio-l1-1-0.dll!fclose(a1: v26, a2: v27, a3: 0, a4: 0, a5: v40, a6: 2);
              if ( v41 == -27941 )
              {
                v28 = 545376;
LABEL_30:
                sub_1932CA27B(a1: v10, a2: v7, a3: v28, a4: v10);
              }
            }
            return sub_132C8DE0(a1: v10, a2: v7, a3: v6, a4: (unsigned __int64)v38 ^ v43, a5: v8, a6: v9);
          }
        }
      }
    }
  }
  *v15 = 21325;
  goto LABEL_21;
}
